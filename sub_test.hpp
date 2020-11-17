#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"
#include "add.hpp"

TEST(SubTest, NumSubNumEvaluate){
	Op* eight = new Op(8);
	Op* four = new Op(4);
	Sub* test = new Sub(eight, four);
	EXPECT_EQ(test->evaluate(), 4);
}

TEST(SubTest, NumSubNumStringify){
	Op* eight = new Op(8);
	Op* four = new Op(4);
	Sub* test = new Sub(eight, four);
	EXPECT_EQ(test->stringify(), "8.000000-4.000000");
}

TEST(SubTest, ZeroSubNumEvaluate){
	Op* three = new Op(3);
	Op* zero = new Op(0);
	Sub* test = new Sub(zero, three);
	EXPECT_EQ(test->evaluate(), -3);
}

TEST(SubTest, ZeroSubNumStringify){
        Op* three = new Op(3);
        Op* zero = new Op(0);
        Sub* test = new Sub(zero, three);
        EXPECT_EQ(test->stringify(), "0.000000-3.000000");
}

TEST(SubTest, NegNumSubNumEvaluate){
        Op* negThree = new Op(-3);
        Op* five = new Op(5);
        Sub* test = new Sub(negThree, five);
        EXPECT_EQ(test->evaluate(), -8);
}

TEST(SubTest, NegNumSubNumStringify){
	Op* negThree = new Op(-3);
	Op* five = new Op(5);
	Sub* test = new Sub(negThree, five);
	EXPECT_EQ(test->stringify(), "-3.000000-5.000000");
}

TEST(SubTest, NegNumSubNegNumEvaluate){
	Op* negThree = new Op(-3);
	Op* negFive = new Op(-5);
	Sub* test = new Sub(negThree, negFive);
	EXPECT_EQ(test->evaluate(), 2);
}

TEST(SubTest, NegNumSubNegNumStringify){
	Op* negThree = new Op(-3);
	Op* negFive = new Op(-5);
	Sub* test = new Sub(negThree, negFive);
	EXPECT_EQ(test->stringify(), "-3.000000--5.000000");
}

TEST(SubTest, AddSubNum){
        Op* Three = new Op(3);
        Op* five = new Op(5);
	Op* two = new Op(2);
	Add* val = new Add(Three,five);
        Sub* test = new Sub(val,two);
        EXPECT_EQ(test->evaluate(), 6);
}

TEST(SubTest, StringAddSubNum){
        Op* Three = new Op(3);
        Op* five = new Op(5);
        Op* two = new Op(2);
        Add* val = new Add(Three,five);
        Sub* test = new Sub(val,two);
        EXPECT_EQ(test->stringify(), "3.000000 + 5.000000-2.000000");
}




#endif //__SUB_TEST_HPP__
