# Copyright 2026 dywoq - Apache License 2.0
# https://github.com/dywoq/spark

cmake_minimum_required(VERSION 4.4)
project(spark LANGUAGES C)

file(GLOB_RECURSE SOURCES src/*.c)

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_compile_options(${PROJECT_NAME}
        PUBLIC -std=c23
)
target_include_directories(${PROJECT_NAME}
        PUBLIC -I include/
)

