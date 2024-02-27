cmake_minimum_required(VERSION 3.12)

cmake_policy(SET CMP0077 NEW)
cmake_policy(SET CMP0079 NEW)

project(cpp_training_boilerplate
        VERSION 0.1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# Needed by clang-tidy
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_testing()

add_subdirectory(cmake)
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(examples)