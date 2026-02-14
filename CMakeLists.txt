cmake_minimum_required(VERSION 3.16)

project(Qt6HelloWorld LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_add_executable(Qt6HelloWorld
    main.cpp
)

target_link_libraries(Qt6HelloWorld PRIVATE Qt6::Widgets)
