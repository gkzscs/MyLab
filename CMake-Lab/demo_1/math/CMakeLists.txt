add_library(math_lib math_func.cpp)

# Specify the install path of library
install(TARGETS math_lib DESTINATION bin)
install(FILES math_func.h DESTINATION include)

