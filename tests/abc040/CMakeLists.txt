add_executable(testabc040c c.cc)
target_link_libraries(testabc040c abc040c gtest_main)

include_directories(${PROJECT_SOURCE_DIR}/src)
include(GoogleTest)

gtest_discover_tests(testabc040c)