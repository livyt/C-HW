cc_library(
  name = "mmath",
  srcs = ["math.cpp"],
  hdrs = ["math.h"]
)

cc_binary(
  name = "main",
  srcs = ["main.cpp"],
  deps = [":mmath"]
)

cc_test(
  name = "mathtest",
  srcs = ["mathtests.cpp"],
  deps = [":mmath", "//third_party/google/googletest:googletest"]
)
