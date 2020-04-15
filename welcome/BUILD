cc_binary(
    name = "hello_world",
    srcs = [
        "hello.cpp",
    ],
    deps = [
        ":greeting",
        "//modules/time_utils:timer",
        "@mylog//src:log",
    ],
)

cc_library(
    name = "greeting",
    srcs = [
        "greeting.cc",
    ],
    hdrs = [
        "greeting.h",
    ],
  )
