cmake_minimum_required(VERSION 2.8)  #要求cmake最低的版本号
project(main)  # 定义当前工程名字

# 配置编译选项
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -g)  # 作用是将 -g 编译选项添加到 CMAKE_CXX_FLAGS 变量中，以便在编译 C++ 代码时生成调试信息

#配置搜索的子目录
add_subdirectory(testmuduo)



