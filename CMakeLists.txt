cmake_minimum_required(VERSION 4.0)
project(Assignment1)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

include_directories(.)

add_executable(Assignment1
        BNAlgo.cpp
        BNAlgo.hpp
        main.cpp)

target_link_libraries(Assignment1 PRIVATE ${OpenCV_LIBS})
