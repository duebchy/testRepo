cmake_minimum_required(VERSION 3.6.0)
project(test_repo VERSION 0.1.0 LANGUAGES C CXX)

add_executable(degree_convertor main.cpp)

target_link_libraries(degree_convertor degree_convertor_lib)

add_subdirectory(lib)