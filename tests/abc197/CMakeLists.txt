add_executable(testabc197c c.cc)
add_executable(testabc197d d.cc)
add_executable(testabc197e e.cc)

target_link_libraries(testabc197c abc197c gtest_main)
target_link_libraries(testabc197d abc197d gtest_main)
target_link_libraries(testabc197e abc197e gtest_main)

include_directories(${PROJECT_SOURCE_DIR}/src)
include(GoogleTest)

gtest_discover_tests(testabc197c)
gtest_discover_tests(testabc197d)
gtest_discover_tests(testabc197e)