cmake_minimum_required(VERSION 3.24)

project(JsonTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} jsoncpp)

FILE(COPY file.json DESTINATION "${CMAKE_BINARY_DIR}/bin")
FILE(COPY file.json DESTINATION "${CMAKE_BINARY_DIR}")