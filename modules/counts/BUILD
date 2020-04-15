package(default_visibility=["//visibility:public"])

filegroup(
    name = "counts_data",
    srcs = glob([
        "data/*.txt",
    ]),
)

cc_library(
    name="counter",
    hdrs = [ "counter.h" ],
    srcs = [ "counter.cc", ],
    data = [ ":counts_data", ],
)
