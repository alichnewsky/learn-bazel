licenses(["notice"])

cc_library(
  visibility = ["//visibility:public"],
  name = "gflags",
  deps = [
    "//third_party/gflags/upstream:gflags",
  ],
  # gtest detects pthread, and the linker fails without it.
  linkopts = ["-lpthread"],
)
