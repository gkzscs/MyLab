cmake_minimum_required(VERSION 3.1)

project(demo_qt)

# Import qt modules
#set(QT5_DIR C:/Qt/Qt5.12.6/5.12.6/msvc2017_64)
#set(CMAKE_PREFIX_PATH ${QT5_DIR})
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

# set(HEADERS )
set(SOURCES main.cpp)

#add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core Qt5::Gui Qt5::Widgets)

