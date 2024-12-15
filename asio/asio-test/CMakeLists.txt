cmake_minimum_required(VERSION 3.10)
project(asio_test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(WIN32)
    add_definitions(-D_WIN32_WINNT=0x0601)
endif()

# 修改 ASIO 头文件路径，使用绝对路径
include_directories(${PROJECT_SOURCE_DIR}/../include)

add_executable(asio_test src/main.cpp)