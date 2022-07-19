#include <gtest/gtest.h>
#include "sample1.h"

// Sample from Google
// https://github.com/google/googletest/blob/main/googletest/samples/sample1_unittest.cc
TEST(FactorialTest, Negative) {
  // This test is named "Negative", and belongs to the "FactorialTest"
  // test case.
    GoogleSample1 googleSample1;

    EXPECT_EQ(1, googleSample1.Factorial(-5));
    EXPECT_EQ(1, googleSample1.Factorial(-1));
    EXPECT_GT(googleSample1.Factorial(-10), 0);

}
