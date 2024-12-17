// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterSgx",
    products: [
        .library(name: "TreeSitterSgx", targets: ["TreeSitterSgx"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterSgx",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterSgxTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterSgx",
            ],
            path: "bindings/swift/TreeSitterSgxTests"
        )
    ],
    cLanguageStandard: .c11
)
