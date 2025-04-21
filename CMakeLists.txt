cmake_minimum_required(VERSION 3.10)
project(SudoeditFuzz C)

set(CMAKE_C_COMPILER clang)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address,fuzzer")

add_executable(sudoedit_test fuzz_main.c parse_args_vuln.c)
