cmake_minimum_required(VERSION 2.8)
project(example-B CXX)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)

find_package(Example_A)

include_directories(${EXAMPLE_A_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_LIST_DIR})

add_library(example_B example_B/boo.hpp example_B/boo.cpp)
target_link_libraries(example_B ${EXAMPLE_A_LIBRARY})

add_executable(example_B_test test.cpp)
target_link_libraries(example_B_test example_B)

enable_testing()
add_test("Example-B-simple-test" example_B_test)

install(TARGETS example_B DESTINATION "./")
install(FILES "example_B/boo.hpp" DESTINATION "example_B")
