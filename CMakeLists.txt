cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

enable_testing()

add_executable(hello_test tests/hello_test.cpp)
find_package(GTest REQUIRED)
target_link_libraries(hello_test GTest::GTest GTest::Main)

add_test(NAME hello_test COMMAND hello_test)