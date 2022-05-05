cmake_minimum_required(VERSION 3.16)

# set target and project name
set(TARGET_NAME "lis")
set(PROJECT_NAME "LIS_Project")

project(${PROJECT_NAME})

# set target compilation options
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED TRUE)
set (CMAKE_CXX_EXTENSIONS FALSE)

# set executable source files
set(LIS_SRCS
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/lis/Lis.cpp
    ${CMAKE_SOURCE_DIR}/src/node/Node.cpp
)

# set target include directory
set(LIS_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/src)

# add executable for the project
add_executable(${TARGET_NAME}
    ${LIS_SRCS}
)

# set include directory
target_include_directories(${TARGET_NAME} PRIVATE
    "${LIS_INCLUDE_DIR}"
)