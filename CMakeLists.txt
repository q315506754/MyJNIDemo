cmake_minimum_required(VERSION 3.13)
project(MyJNIDemo)

#set(BUILD_USE_64BITS on)
set(CMAKE_BUILD_TYPE  release)
#set(CMAKE_BUILD_TYPE  debug)

set(CMAKE_CXX_STANDARD 14)

#64位
add_compile_options(-m64)

#release版：加上 -static 参数，进行静态链接，使程序不再依赖动态库。加上 -O3 参数，进行最快速度优化。加上-DNDEBUG参数，定义NDEBUG宏，屏蔽断言。
#add_compile_options(-static)
#add_compile_options(-O3)


add_library(MyJNIDemo SHARED library.cpp library.h)