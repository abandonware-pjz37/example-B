cmake_minimum_required(VERSION 2.8)
project(example-B CXX)

find_package(Example_A)

include_directories(${EXAMPLE_A_INCLUDE_DIRS})

add_library(example_B boo.hpp boo.cpp)
target_link_libraries(example_B EXAMPLE_A_LIBRARY)

add_executable(example_B_test test.cpp)
target_link_libraries(example_B_test example_B)

enable_testing()
add_test("Example-B-simple-test" example_B_test)
