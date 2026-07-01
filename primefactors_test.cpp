// primefactors_test.cpp

#include "gmock/gmock.h"
#include "primefactors.cpp"
#include <vector>

using namespace testing;

using std::vector;

class PrimeFixture : public Test {
public:
	PrimeFactors primefactors;
	vector<int> expect;
};

TEST_F(PrimeFixture, Of1)
{
	expect = {};
	EXPECT_EQ(expect, primefactors.of(1));
}

TEST_F(PrimeFixture, Of2)
{
	expect = { 2 };
	EXPECT_EQ(expect, primefactors.of(2));
}

TEST_F(PrimeFixture, Of3)
{
	expect = { 3 };
	EXPECT_EQ(expect, primefactors.of(3));
}

TEST_F(PrimeFixture, Of4)
{
	expect = { 2, 2 };
	EXPECT_EQ(expect, primefactors.of(4));
}

TEST_F(PrimeFixture, Of6)
{
	expect = { 2, 3 };
	EXPECT_EQ(expect, primefactors.of(6));
}