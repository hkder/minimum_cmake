cmake_minimum_required(VERSION 3.27)

project(minimum)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

target_compile_features(minimum PUBLIC cxx_std_20)
