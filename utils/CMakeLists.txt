cmake_minimum_required(VERSION 3.26)
project(utils)

# 头文件对应的目录
aux_source_directory(./ SRC)

# 指定静态库
add_library(utils STATIC ${SRC}
        read_config.cpp
        read_config.h)