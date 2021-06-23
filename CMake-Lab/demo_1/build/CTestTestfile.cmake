# CMake generated Testfile for 
# Source directory: /home/cs/MyLab/CMake-Lab/demo_1
# Build directory: /home/cs/MyLab/CMake-Lab/demo_1/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_run "demo1" "5" "2")
set_tests_properties(test_run PROPERTIES  _BACKTRACE_TRIPLES "/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;43;add_test;/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;0;")
add_test(test_usage "demo1")
set_tests_properties(test_usage PROPERTIES  PASS_REGULAR_EXPRESSION "Usage: .* base exponent" _BACKTRACE_TRIPLES "/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;46;add_test;/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;0;")
add_test(test_5_2 "demo1" "5" "2")
set_tests_properties(test_5_2 PROPERTIES  PASS_REGULAR_EXPRESSION "is 25" _BACKTRACE_TRIPLES "/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;50;add_test;/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;0;")
add_test(test_10_5 "demo1" "10" "5")
set_tests_properties(test_10_5 PROPERTIES  PASS_REGULAR_EXPRESSION "is 100000" _BACKTRACE_TRIPLES "/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;55;add_test;/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;60;do_test;/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;0;")
add_test(test_2_10 "demo1" "2" "10")
set_tests_properties(test_2_10 PROPERTIES  PASS_REGULAR_EXPRESSION "is 1024" _BACKTRACE_TRIPLES "/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;55;add_test;/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;61;do_test;/home/cs/MyLab/CMake-Lab/demo_1/CMakeLists.txt;0;")
subdirs("math")
