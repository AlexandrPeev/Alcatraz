cmake_minimum_required(VERSION 3.0.0)
project(Alcatraz VERSION 0.1.0 LANGUAGES C CXX)
set (CMAKE_CXX_STANDARD 14)

include(CTest)
enable_testing()

add_library(Alcatraz
${CMAKE_SOURCE_DIR}/src/median.h
${CMAKE_SOURCE_DIR}/src/median.cpp
)

add_executable(median_tests ${CMAKE_SOURCE_DIR}/tests/median_tests.cpp)
add_test(tests median_tests)

target_link_libraries(median_tests PRIVATE Alcatraz)
