{
  description = "natsume-simple nix flake";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";

    flake-parts.url = "github:hercules-ci/flake-parts";

    # process-compose-flake.url = "github:Platonic-Systems/process-compose-flake";
    # services-flake.url = "github:juspay/services-flake";

    git-hooks-nix = {
      url = "github:cachix/git-hooks.nix";
      inputs.nixpkgs.follows = "nixpkgs";
    };

    # nix2container = {
    #   url = "github:nlewo/nix2container";
    #   inputs.nixpkgs.follows = "nixpkgs";
    # };
  };

  outputs =
    inputs@{ flake-parts, ... }:
    flake-parts.lib.mkFlake { inherit inputs; } {
      imports = [
        # To import a flake module
        # 1. Add foo to inputs
        # 2. Add foo as a parameter to the outputs function
        # 3. Add here: foo.flakeModule
        # inputs.process-compose-flake.flakeModule
        inputs.git-hooks-nix.flakeModule
      ];
      systems = [
        "x86_64-linux"
        "aarch64-linux"
        "aarch64-darwin"
        "x86_64-darwin"
      ];
      perSystem =
        {
          config,
          self',
          inputs',
          pkgs,
          system,
          lib,
          ...
        }:
        let
          development-packages = [
            (
              # We first propagate the flag
              (pkgs.tree-sitter.override {
                webUISupport = true;
              }).overrideAttrs
                # ... and then add the patch fix
                (
                  oldAttrs: {
                    patches = [
                      (pkgs.substitute {
                        src = ./fix-paths.patch;
                        substitutions = [
                          "--subst-var-by"
                          "emcc"
                          "${pkgs.emscripten}/bin/emcc"
                        ];
                      })
                    ];
                    postInstall =
                      oldAttrs.postInstall
                      + ''
                        cp lib/binding_web/tree-sitter.js $out/lib
                        cp lib/binding_web/tree-sitter.wasm $out/lib
                      '';
                  }
                )
            )
            pkgs.bashInteractive
            pkgs.nodejs
            pkgs.git
            pkgs.git-cliff # Changelog generator
          ];
        in
        {
          # Per-system attributes can be defined here. The self' and inputs'
          # module parameters provide easy access to attributes of the same
          # system.
          formatter = pkgs.nixfmt-rfc-style;
          pre-commit.settings.hooks = {
            nixfmt-rfc-style.enable = true;
            flake-checker.enable = true;
          };

          devShells = {
            default = pkgs.mkShell {
              nativeBuildInputs = development-packages;
              shellHook = ''
                ${config.pre-commit.installationScript}
                # Resetting tty settings prevents issues after exiting the shell
                ${pkgs.coreutils}/bin/stty sane
                # export TERM="xterm-256color"
                # export LANG="en_US.UTF-8"
                # export LC_ALL="en_US.UTF-8"
                # Set up shell and prompt
                export SHELL=${pkgs.bashInteractive}/bin/bash
                export PS1='(direnv) \[\e[34m\]\w\[\e[0m\] $(if [[ $? == 0 ]]; then echo -e "\[\e[32m\]"; else echo -e "\[\e[31m\]"; fi)#\[\e[0m\] '
                eval "$(direnv hook bash)"
                export PATH=${self'.packages.build-ts}/bin/:$PATH
              '';
            };
          };

          packages.build-ts = pkgs.writeShellApplication {
            name = "build-ts";
            runtimeInputs = development-packages;
            text = ''
              make clean
              tree-sitter generate src/sgx.js
              make test
              tree-sitter build --wasm
              tree-sitter playground -q
            '';
          };
        };
      flake = {
        # The usual flake attributes can be defined here, including system-
        # agnostic ones like nixosModule and system-enumerating ones, although
        # those are more easily expressed in perSystem.
      };
    };
}
