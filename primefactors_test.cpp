// primefactors_test.cpp

#include "gmock/gmock.h"
#include "primefactors.cpp"
#include <vector>

using namespace testing;

using std::vector;

TEST(PrimeFactor, Of1)
{
	PrimeFactors primefactors;

	vector<int> actual = primefactors.of(1);

	vector<int> expect = {};

	EXPECT_EQ(expect, actual);
}