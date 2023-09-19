# cmake 最低版本
cmake_minimum_required(VERSION 3.26)

# 项目名称
project(cpp)

set(CMAKE_CXX_STANDARD 17)
# 设置动态库静态库文件路径 LIBRARY_OUTPUT_PATH
# 设置静态库文件路径 EXECUTABLE_OUTPUT_PATH
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build/lib)
file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)

# 生成库文件
# linux: 静态.a 动态库.so
# windows: 静态库.lib 动态库.dll
# 动态库有可执行权限
# SHARED 动态库制作，STATIC 静态库制作
add_library(static_lib STATIC ${SRC})
add_library(dyn_lib SHARED ${SRC})
