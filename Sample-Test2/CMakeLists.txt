project(SampleTest)

include_directories("../Problem")

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(SampleTest test.cpp)

target_link_libraries(SampleTest solve-lib gtest_main)

include(GoogleTest)
gtest_discover_tests(SampleTest)