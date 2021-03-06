﻿# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_DEBUG_POSTFIX "d" CACHE STRING "add a postfix, usually d on windows")
set(CMAKE_RELEASE_POSTFIX "" CACHE STRING "add a postfix, usually empty on windows")
set(CMAKE_RELWITHDEBINFO_POSTFIX "rd" CACHE STRING "add a postfix, usually empty on windows")
set(CMAKE_MINSIZEREL_POSTFIX "s" CACHE STRING "add a postfix, usually empty on windows")

project ("SGProject")
set (SGProject_VERSION_MAJOR 0)
set (SGProject_VERSION_MINOR 1)

configure_file (
	"${PROJECT_SOURCE_DIR}/Config/SGConfig.h.in"
	"${PROJECT_SOURCE_DIR}/Config/SGConfig.h"
)

include_directories(
	"${PROJECT_SOURCE_DIR}/Config"
	"${PROJECT_SOURCE_DIR}/3rdParty/include"
	"${PROJECT_SOURCE_DIR}/src"
	"${PROJECT_SOURCE_DIR}/src/SGApplication"
	"${PROJECT_SOURCE_DIR}/src/SGEventManager"
	"${PROJECT_SOURCE_DIR}/src/SGFileManager"
	"${PROJECT_SOURCE_DIR}/src/SGGraphicsManager"
	"${PROJECT_SOURCE_DIR}/src/SGInterface"
	"${PROJECT_SOURCE_DIR}/src/SGLog"
	"${PROJECT_SOURCE_DIR}/src/SGMemoryManager"
	"${PROJECT_SOURCE_DIR}/src/SGMultiThread"
	"${PROJECT_SOURCE_DIR}/src/SGProject"
	"${PROJECT_SOURCE_DIR}/src/SGTime"
)

link_directories(
    "${PROJECT_SOURCE_DIR}/3rdParty/lib"
)

add_subdirectory ("3rdParty")
add_subdirectory ("src")
add_subdirectory ("Application")
add_subdirectory ("test")
