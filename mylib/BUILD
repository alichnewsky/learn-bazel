
cc_library(
    name = "mylib",
    # convention: all .cc and the headers that are not public in here
    # alternatively we could build an internal library, strip it, etc...
    srcs = ["functions.cpp"],
    # convention:  put the headers defining the external interfaec of the library in here
    hdrs = ["functions.hpp"],
)

cc_test(
    name = "functions_test",
    srcs = ["functions_test.cpp"],
    deps = [":mylib"],
    size = "small",
    timeout = "short",
)
