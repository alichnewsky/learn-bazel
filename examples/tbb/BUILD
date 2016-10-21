cc_library(
    name = "fib",
    srcs = ["fib.cc"],
    deps = ["@tbb//:tbb"]
)

cc_test(
    name = "fib_test",
    srcs = ["fib_test.cc"],
    deps = [
        ":fib",
        "@tbb//:tbb",
        "//third_party/gtest:gtest_main"
    ],
    linkstatic = 1
)
