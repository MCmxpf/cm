cmake_minimum_required(VERSION 3.16)
project(hello_opencv)

set(CMAKE_CXX_STANDARD 17)
find_package(OpenCV REQUIRED)      # 自动找 OpenCV

add_executable(hello_opencv main.cpp)
target_link_libraries(hello_opencv
  ${OpenCV_LIBS})                    # 链接库

