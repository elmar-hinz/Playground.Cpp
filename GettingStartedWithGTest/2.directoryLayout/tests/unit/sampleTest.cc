#include <limits.h>
#include "sample.h"
#include "gtest/gtest.h"

TEST(FactorialTest, Negative) {
	// This test is named "Negative", and belongs to the "FactorialTest" test case.
	EXPECT_EQ(1, Factorial(-5));
	EXPECT_EQ(1, Factorial(-1));
	EXPECT_GT(Factorial(-10), 0);
}



