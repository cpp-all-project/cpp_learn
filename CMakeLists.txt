# cmake 最低版本
cmake_minimum_required(VERSION 3.26)

# 项目名称
project(learn VERSION 1.0.0 DESCRIPTION "learn cpp")

# 固定宏
# CMAKE_CXX_STANDARD: 指定编译 c++ 版本
# PROJECT_SOURCE_DIR 获取执行 CMakeLists.txt 文件命令后输入的路径位置 = CMakeLists.txt 文件的目录
# CMAKE_CURRENT_SOURCE_DIR 获取 CMakeLists.txt 文件的目录
set(CMAKE_CXX_STANDARD 17)
set(HOME ./bin)
# EXECUTABLE_OUTPUT_PATH: 指定可执行文件的输出路径
set(EXECUTABLE_OUTPUT_PATH ${HOME})

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


# 指定动态、静态库路径，如果是系统的它可以自己识别，但是如果是三方的可能找不到
link_directories(${PROJECT_SOURCE_DIR}/lib/compile/build/lib)
# 链接静态库
# 参数一: 静态库路径
# 参数二: 静态库名字，可以掐头(lib)去尾(.a)
link_libraries(static_lib)


# 生成可执行程序
# 如果链接静态库，打包时候会打包到 app 可执行文件里
# 如果链接动态库，打包时候会不会打进去，程序启动后调用时候才加载
# 参数1：可执行文件名
# 参数n：需要构建的文件
add_executable(app ${SRC})
# 指定动态库路径(写在这个文件最后，要先生成文件再链接)
# 参数一: 为谁添加动态库，可以是库、可执行文件、源文件
# 参数二: 权限
# 参数三: 动态库名字
target_link_libraries(app PUBLIC dyn_lib)
