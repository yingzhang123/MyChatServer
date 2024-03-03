cmake_minimum_required(VERSION 3.0)  #要求cmake最低的版本号
project(chat)  # 定义当前工程名字

# 配置编译选项
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -g)  # 作用是将 -g 编译选项添加到 CMAKE_CXX_FLAGS 变量中，以便在编译 C++ 代码时生成调试信息

#配置最终的可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#配置头文件的搜索路径
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/include/server)
include_directories(${PROJECT_SOURCE_DIR}/include/server/db)
include_directories(${PROJECT_SOURCE_DIR}/include/server/model)
include_directories(${PROJECT_SOURCE_DIR}/include/server/redis)
include_directories(${PROJECT_SOURCE_DIR}/thirdparty)

# 加载子目录
add_subdirectory(src)