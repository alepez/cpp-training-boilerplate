add_library(boilerplate
        boilerplate.cpp
        boilerplate.hpp
)

# Be super-pedantic on compiler warnings
target_compile_options(boilerplate
        PRIVATE -Wall
        PRIVATE -Wpedantic
        PRIVATE -Wextra
        PRIVATE -Werror
        PRIVATE -Wno-unused-parameter
)

target_include_directories(boilerplate
        PUBLIC ${CMAKE_SOURCE_DIR}/src
)

target_link_libraries(boilerplate
        PUBLIC fmt::fmt
        PUBLIC spdlog::spdlog
)

target_analysis_setup(boilerplate)

target_enable_coverage(boilerplate)

add_catch2_test(boilerplate_test boilerplate_test.cpp)
target_link_libraries(boilerplate_test PRIVATE boilerplate)

target_valgrind_setup(boilerplate_test)