#include <gtest/gtest.h>

#include <kvstores/dummy_header.hpp>

TEST(dummy_test_suite, test1) { ASSERT_EQ(1 + 2, 3); }

TEST(dummy_test_suite, dummy_header_test) {
    auto result = fun(1, 2);
    ASSERT_EQ(result, 3);
}