cmake_minimum_required(VERSION 3.0.0)

project(blockchain VERSION 0.1.0)

set(SOURCE_LIB Block.cpp Blockchain.cpp sha256.cpp)

set(SOURCE_EXE main.cpp)

add_library(blockchain_lib ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

target_link_libraries(main blockchain_lib)

