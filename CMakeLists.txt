cmake_minimum_required(VERSION 3.10)
project (code-smp)
add_executable(code-smp code-smp.cpp)
install(TARGETS code-smp RUNTIME DESTINATION bin)
