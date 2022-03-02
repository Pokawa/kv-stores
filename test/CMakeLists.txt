find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(dummy_test dummy_test.cpp)
target_link_libraries(dummy_test  GTest::gtest GTest::gtest_main)

gtest_discover_tests(dummy_test)