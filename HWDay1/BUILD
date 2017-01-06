cc_binary(
  name = 'main',
  srcs = ['main.cpp'],
  deps = [':robotState']
)

cc_library(
  name = 'robotState',
  srcs = ['robotState.cpp'],
  hdrs = ['robotState.h']
)

cc_test(
  name = 'robotTest',
  srcs = ['robotTest.cpp'],
  deps = ['//third_party/google/googletest:googletest', ':robotState']
)

