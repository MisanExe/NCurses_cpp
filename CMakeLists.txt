cmake_minimum_required(VERSION 3.10)

#project name
project(NCurses_cpp VERSION 1.0.0)

set(CMAKE_CXX_STANDARD_REQUIRED 11)
#set(CMAKE_CXX_STANDARD_REQUIRED True)

#add exe
add_executable(NCurses_cpp src/main.cpp src/nc_window.cpp src/nc_master_window.cpp)

#add library
target_link_libraries(NCurses_cpp ncurses)
target_include_directories(NCurses_cpp PRIVATE ${CMAKE_SOURCE_DIR}/include)