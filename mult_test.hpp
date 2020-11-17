#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"
#include "op.hpp"
#include "add.hpp"

TEST(MultTest, NumTimesZero) {
    Op* zero = new Op(0);
    Op* eight = new Op(8);
    Mult* test = new Mult(zero,eight);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, NumTimesNum) {
    Op* one = new Op(1);
    Op* eight = new Op(8);
    Mult* test = new Mult(one,eight);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(MultTest, SingleNegNum) {
    Op* negTwo = new Op(-2);
    Op* eight = new Op(8);
    Mult* test = new Mult(negTwo,eight);
    EXPECT_EQ(test->evaluate(), -16);
}

TEST(MultTest, DoubleNeg) {
    Op* negTwo = new Op(-2);
    Op* negEight = new Op(-8);
    Mult* test = new Mult(negTwo,negEight);
    EXPECT_EQ(test->evaluate(), 16);
}


TEST(MultTest, String) {
    Op* zero = new Op(0);
    Op* eight = new Op(8);
    Mult* test = new Mult(zero,eight);
    EXPECT_EQ(test->stringify(), "0.000000 * 8.000000");
}

TEST(MultTest,oneNegString) {
    Op* zero = new Op(0);
    Op* eight = new Op(-8);
    Mult* test = new Mult(zero,eight);
    EXPECT_EQ(test->stringify(), "0.000000 * -8.000000");
}

TEST(MultTest, twoNegString) {
    Op* one = new Op(-1);
    Op* eight = new Op(-8);
    Mult* test = new Mult(one,eight);
    EXPECT_EQ(test->stringify(), "-1.000000 * -8.000000");
}

TEST(MultTest, NumTimesAdd) {
    Op* two = new Op(2);
    Op* three = new Op(3);
    Op* eight = new Op(8);
    Add* val= new Add(two,three);
    Mult* test = new Mult(val,eight);
    EXPECT_EQ(test->evaluate(),40 );
}

TEST(MultTest, NumTimesAddString) {
    Op* two = new Op(2);
    Op* three = new Op(3);
    Op* eight = new Op(8);
    Add* val= new Add(two,three);
    Mult* test = new Mult(val,eight);
    EXPECT_EQ(test->stringify(),"2.000000 + 3.000000 * 8.000000");
}



#endif
