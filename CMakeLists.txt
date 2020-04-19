﻿# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("SGProject")

# 包含子项目。
#add_subdirectory ("SGProject")

# 将源代码添加到此项目的可执行文件。
add_executable (SGProject "SGProject/SGProject.cpp" "SGProject/SGProject.h")