cmake_minimum_required(VERSION 3.10)
project(practice)

find_package(plog CONFIG REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE plog::plog)