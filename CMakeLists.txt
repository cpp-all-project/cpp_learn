cmake_minimum_required(VERSION 3.26)
project(learn_cpp VERSION 1.0.0 DESCRIPTION "learn cpp")
set(CMAKE_CXX_STANDARD 17)

# 自定义宏
add_definitions(-DDEBUG)


include_directories(${PROJECT_SOURCE_DIR}/utils) # 头文件对应的目录
add_subdirectory(utils) # 嵌套的子目录
link_libraries(utils) # 链接静态库

add_executable(app main.cpp)
