cmake_minimum_required(VERSION 3.5)

set(CMAKE_PROJECT_NAME faradars_oop)
set(CMAKE_PROJECT_VERSION 1)
set(CMAKE_PROJECT_VERSION_MAJOR 0)
set(CMAKE_PROJECT_VERSION_MINOR 1)
set(CMAKE_PROJECT_DESCRIPTION "training C++")

project (
        ${CMAKE_PROJECT_NAME}
        VERSION ${CMAKE_PROJECT_VERSION_MAJOR}.${CMAKE_PROJECT_VERSION_MINOR}
        LANGUAGES CXX
        DESCRIPTION ${CMAKE_PROJECT_DESCRIPTION})

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_DEFAULT 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_FLAGS " -std=gnu++23 -O0 -g3 -pedantic -Wall -Wextra -Wconversion -Wcast-align -Wcast-qual -Wdisabled-optimization -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wshadow -Wsign-conversion -Wswitch-default -Wundef -Wfloat-equal -fmessage-length=0 -v -fPIC -fPIE -m64 -march=corei7-avx ")

add_executable(${CMAKE_PROJECT_NAME} src/app/main.cpp)

configure_file(src/header/config.h.in config.h)

target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}")

#install(TARGETS ${ROOT_PROJECT_NAME} LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})