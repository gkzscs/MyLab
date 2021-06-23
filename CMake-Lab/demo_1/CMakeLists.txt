# CMake minimum version required
cmake_minimum_required(VERSION 2.8)

# Project informaiton
project(demo_1)

set(CMAKE_INSTALL_PREFIX .)

# Support gdb
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

# Include other directories, so that you can just access headers without parent directory
set(MATH_SRC_DIR ./math)
aux_source_directory(. SRC_DIR)


# Set option
configure_file(${PROJECT_SOURCE_DIR}/config.h.in ${PROJECT_SOURCE_DIR}/config.h)
option(USE_MATH "Use provided math implementation" ON)

if (USE_MATH)
	include_directories(${MATH_SRC_DIR})
	add_subdirectory(${MATH_SRC_DIR})
	set(EXTRA_LIBS ${EXTRA_LIBS} math_lib)
endif (USE_MATH)

# Specify target
add_executable(demo1 ${SRC_DIR})

target_link_libraries(demo1 ${EXTRA_LIBS})

# Specify install path
install(TARGETS demo1 DESTINATION bin)
install(FILES ${PROJECT_SOURCE_DIR}/config.h DESTINATION include)


# Add test
enable_testing()

# Test the process runs
add_test(test_run demo1 5 2)

# Test help information
add_test(test_usage demo1)
set_tests_properties(test_usage PROPERTIES PASS_REGULAR_EXPRESSION "Usage: .* base exponent")

# Test power
add_test(test_5_2 demo1 5 2)
set_tests_properties(test_5_2 PROPERTIES PASS_REGULAR_EXPRESSION "is 25")

# Define macro to simplify the test work
macro(do_test arg1 arg2 result)
	add_test(test_${arg1}_${arg2} demo1 ${arg1} ${arg2})
	set_tests_properties(test_${arg1}_${arg2} PROPERTIES PASS_REGULAR_EXPRESSION ${result})
endmacro(do_test)

do_test(5 2 "is 25")
do_test(10 5 "is 100000")
do_test(2 10 "is 1024")

