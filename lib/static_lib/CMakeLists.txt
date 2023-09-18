# cmake 最低版本
cmake_minimum_required(VERSION 3.26)

# 项目名称
project(learnLib)

# 固定宏
# CMAKE_CXX_STANDARD: 指定编译 c++ 版本
# EXECUTABLE_OUTPUT_PATH: 指定可执行文件的输出路径
# PROJECT_SOURCE_DIR 获取执行 CMakeLists.txt 文件命令后输入的路径位置 = CMakeLists.txt 文件的目录
# CMAKE_CURRENT_SOURCE_DIR 获取 CMakeLists.txt 文件的目录
set(CMAKE_CXX_STANDARD 17)

# 搜索某个目录下的源文件并赋值第二个参数变量中
# aux_source_directory(./src SRC)

# 搜索某个目录下的源文件并赋值第三个参数变量中
# 参数一：
#   GLOB_RECURSE 递归搜索
#   GLOB 当前目录搜索
# 参数二: 变量名
# 参数三: 目录及文件类型
file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)
# include_directories 指定头文件对应的目录
include_directories(${PROJECT_SOURCE_DIR}/include)



# 生成库文件
# linux: 静态库.so 动态库.a
# windows: 静态库.lib 动态库.dll
# 动态库有可执行权限
# SHARED 动态库制作，STATIC 静态库制作
add_library(learnLib SHARED ${SRC})
