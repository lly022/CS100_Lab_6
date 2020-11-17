#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "pow.hpp"
#include "op.hpp"

TEST(PowTest, NumToZero) {
    Op* zero = new Op(0);
    Op* eight = new Op(8);
    Pow* test = new Pow(eight,zero);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, NumToNum) {
    Op* two = new Op(2);
    Op* eight = new Op(8);
    Pow* test = new Pow(eight,two);
    EXPECT_EQ(test->evaluate(), 64);
}

TEST(PowTest, NegNumToNum) {
    Op* two = new Op(-2);
    Op* three = new Op(3);
    Pow* test = new Pow(two,three);
    EXPECT_EQ(test->evaluate(), -8);
}

TEST(PowTest, NumToNegNum) {
    Op* two = new Op(-2);
    Op* eight = new Op(8);
    Pow* test = new Pow(eight,two);
    EXPECT_EQ(test->evaluate(), (0.015625));
}

TEST(PowTest, StringNumToNum) {
    Op* two = new Op(2);
    Op* eight = new Op(8);
    Pow* test = new Pow(eight,two);
    EXPECT_EQ(test->stringify(), "8.000000 ** 2.000000");
}

TEST(PowTest, StringNumToNegNum) {
    Op* two = new Op(-2);
    Op* eight = new Op(8);
    Pow* test = new Pow(eight,two);
    EXPECT_EQ(test->stringify(), "8.000000 ** -2.000000");
}

TEST(PowTest, DeciNum) {
    Op* two = new Op(2);
    Op* three = new Op(3.5);
    Pow* test = new Pow(three,two);
    EXPECT_NEAR(test->evaluate(), 12.25, .001);
}


TEST(PowTest, AddToNum) {
    Op* two = new Op(2);
    Op* five = new Op(5);
    Op* three = new Op(3);
    Mult* val = new Mult(five,three);
    Pow* test = new Pow(val,two);
    EXPECT_EQ(test->evaluate(), 225);
}

TEST(PowTest, StringAddToNum) {
    Op* two = new Op(2);
    Op* five = new Op(5);
    Op* three = new Op(3);
    Mult* val = new Mult(five,three);
    Pow* test = new Pow(val,two);
    EXPECT_EQ(test->stringify(),"5.000000 * 3.000000 ** 2.000000");
}


#endif
