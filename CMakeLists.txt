cmake_minimum_required(VERSION 2.8.3)

project(SlideWindowIO)

find_package(Eigen3 REQUIRED)

include_directories(
    ${EIGEN3_INCLUDE_DIR}
)

add_executable(hello main.cpp)
