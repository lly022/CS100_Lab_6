#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, NumBelow100){
	Rand* test = new Rand();
	EXPECT_LT(test->evaluate(), 100);
}

TEST(RandTest, NumGreater0){
	Rand* test = new Rand();
	EXPECT_GT(test->evaluate(), 0);
}

TEST(RandTest, RandStringify){
	Rand* test = new Rand();
	EXPECT_EQ(test->stringify(), "77.000000");
}


 

#endif //__RAND_TEST_HPP__
