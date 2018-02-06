cmake_minimum_required(VERSION 3.6)
project(ssdsim-merge)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        avlTree.c
        avlTree.h
        flash.c
        flash.h
        initialize.c
        initialize.h
        pagemap.c
        pagemap.h
        ssd.c
        ssd.h)

add_executable(ssdsim-merge ${SOURCE_FILES})