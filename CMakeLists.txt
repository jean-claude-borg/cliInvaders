cmake_minimum_required(VERSION 3.22)
project(cliInvaders)

set(CMAKE_CXX_STANDARD 23)

add_executable(cliInvaders main.cpp Screen.cpp Screen.h Player.cpp Player.h Input.cpp)
