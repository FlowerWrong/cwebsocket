cmake_minimum_required(VERSION 3.3)
project(cwebsocket)

set(CMAKE_C_FLAGS "-std=c99")
set(CMAKE_C_FLAGS "-lmysqlclient")
set(CMAKE_C_FLAGS "-I/usr/local/include")
set(CMAKE_C_FLAGS "-L/usr/local/lib")
set(CMAKE_C_FLAGS "-lzlog")

set(SOURCE_FILES server.c tools.c)
add_executable(cwebsocket ${SOURCE_FILES})
