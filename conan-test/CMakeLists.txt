cmake_minimum_required(VERSION 3.15)
project(drogon-test LANGUAGES CXX)

find_package(Drogon CONFIG REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} Drogon::Drogon)
