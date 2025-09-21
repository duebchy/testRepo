include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)
# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


# enable_testing()

add_executable(
    degree_convertor_tests
    degree_convertor_ut.cpp
)

target_link_libraries(
    degree_convertor_tests
    degree_convertor_lib
    GTest::gtest_main
    
)

target_include_directories(degree_convertor_tests PUBLIC ${PROJECT_SOURCE_DIR})

include(GoogleTest)

gtest_discover_tests(degree_convertor_tests)