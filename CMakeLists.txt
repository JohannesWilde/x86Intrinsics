cmake_minimum_required(VERSION 3.16)

project(IntelIntrinsics LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(IntelIntrinsics main.cpp)

if (MSVC)
    # message(WARNING " CMAKE_CXX_FLAGS_RELEASE: " ${CMAKE_CXX_FLAGS_RELEASE})
    set(CMAKE_CXX_FLAGS_DEBUG "")
    set(CMAKE_CXX_FLAGS_RELEASE "")
    # /Zi - separate PDB file with debug information
    # /Ob1 - Allows expansion only of functions marked inline, __inline, or __forceinline, or in a C++ member function defined in a class declaration.
    # /Oi - Replaces some function calls with intrinsic or otherwise special forms of the function that help your application run faster.
    # /Oy - Suppresses creation of frame pointers on the call stack.
    target_compile_options(IntelIntrinsics
        PRIVATE "/Zi"
        PRIVATE "/Ob1"
        PRIVATE "/Oi"
        PRIVATE "/Oy"
    )
endif()
