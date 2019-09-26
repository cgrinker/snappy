load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def _maybe(repo_rule, name, **kwargs):
    if name not in native.existing_rules():
        repo_rule(name = name, **kwargs)

def repositories():
    _maybe(
        http_archive,
        name = "com_github_gflags_gflags",
        sha256 = "6e16c8bc91b1310a44f3965e616383dbda48f83e8c1eaa2370a215057b00cabe",
        strip_prefix = "gflags-77592648e3f3be87d6c7123eb81cbad75f9aef5a",
        urls = [
            "https://mirror.bazel.build/github.com/gflags/gflags/archive/77592648e3f3be87d6c7123eb81cbad75f9aef5a.tar.gz",
            "https://github.com/gflags/gflags/archive/77592648e3f3be87d6c7123eb81cbad75f9aef5a.tar.gz",
        ],
    )

    _maybe(
        http_archive,
        name = "com_google_glog",
        sha256 = "dfc074b41a5b86fc5dda4f0e2e2d6cc5b21f798c9fcc8ed5fea9c8f7c4613be6",
        strip_prefix = "glog-dd2b93d761a19860190cb3fa92066c8031e912e3",
        urls = [
            "https://mirror.bazel.build/github.com/google/glog/archive/dd2b93d761a19860190cb3fa92066c8031e912e3.tar.gz",
            "https://github.com/google/glog/archive/dd2b93d761a19860190cb3fa92066c8031e912e3.tar.gz",
        ],
    )

    _maybe(
        http_archive,
        name = "com_google_googletest",
        sha256 = "c18f281fd6621bb264570b99860a0241939b4a251c9b1af709b811d33bc63af8",
        strip_prefix = "googletest-e3bd4cbeaeef3cee65a68a8bd3c535cb779e9b6d",
        urls = [
            "https://mirror.bazel.build/github.com/google/googletest/archive/e3bd4cbeaeef3cee65a68a8bd3c535cb779e9b6d.tar.gz",
            "https://github.com/google/googletest/archive/e3bd4cbeaeef3cee65a68a8bd3c535cb779e9b6d.tar.gz",
        ],
    )
    
    _maybe(
        http_archive,
        name = "com_github_google_snappy",
	    build_file = "@com_github_cschuet_snappy//bazel/third_party/snappy:snappy.BUILD",
        strip_prefix = "snappy-62363d9a797e4c6607193cb14000cd3a7705c185",
        urls = [
            "https://github.com/google/snappy/archive/62363d9a797e4c6607193cb14000cd3a7705c185.zip",
        ],
    )
