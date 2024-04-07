cmake_minimum_required(VERSION 3.27)
project(lab2)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab2 main.cpp
        model.cpp
        model.h
        view.cpp
        view.h
        controller.cpp
        controller.h)
