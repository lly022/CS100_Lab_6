#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"
#include "op.hpp"
#include "mult.hpp"

TEST(AddTest, NumPlusZero) {
    Op* zero = new Op(0);
    Op* eight = new Op(8);
    Add* test = new Add(zero,eight);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(AddTest, NumPlusNum) {
    Op* one = new Op(1);
    Op* eight = new Op(8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->evaluate(), 9);
}

TEST(AddTest, NegNumPlusNum) {
    Op* one = new Op(-1);
    Op* eight = new Op(8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->evaluate(), 7);
}

TEST(AddTest, NegNumPlusNegNum) {
    Op* one = new Op(-1);
    Op* eight = new Op(-8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->evaluate(), -9);
}

TEST(AddTest, StringNumPlusNum) {
    Op* one = new Op(1);
    Op* eight = new Op(8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->stringify(), "1.000000 + 8.000000");
}

TEST(AddTest, StringNegNumPlusNum) {
    Op* one = new Op(-1);
    Op* eight = new Op(8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->stringify(), "-1.000000 + 8.000000");
}

TEST(AddTest, StringNegNumPlusNegNum) {
    Op* one = new Op(-1);
    Op* eight = new Op(-8);
    Add* test = new Add(one,eight);
    EXPECT_EQ(test->stringify(), "-1.000000 + -8.000000");
}

TEST(AddTest, DecPlusNegDecEvaluate){
    Op* op1 = new Op(1.555);
    Op* op2 = new Op(-0.554); 
    Add* test = new Add(op1, op2);
    EXPECT_EQ(test->evaluate(), 1.001);
}

TEST(AddTest, DecPlusNegDecStringify){
    Op* op1 = new Op(1.555);
    Op* op2 = new Op(-0.554);
    Add* test = new Add(op1, op2);
    EXPECT_EQ(test->stringify(), "1.555000 + -0.554000");
}

TEST(AddTest, MultPlusNumEvaluate){
   Base* four = new Op(4);
   Base* seven = new Op(7);
   Base* three = new Op(3);
   Mult* twentyEight = new Mult(seven, four);
   Add* test = new Add(three, twentyEight);
   EXPECT_EQ(test->evaluate(), 31);  
}

TEST(AddTest, MultPlusNumStringify){
   Base* four = new Op(4);
   Base* seven = new Op(7);
   Base* three = new Op(3);
   Mult* twentyEight = new Mult(seven, four);
   Add* test = new Add(three, twentyEight);
   EXPECT_EQ(test->stringify(), "3.000000 + 7.000000 * 4.000000");
}


#endif
