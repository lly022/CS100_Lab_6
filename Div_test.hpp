#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "Div.hpp"
#include "add.hpp"
//#include "mockClasses.hpp"

TEST(DivTest, DivEvaluateNormalValues){
	Op* op1 = new Op(8);
  	Op* op2 = new Op(4);
        Div* test  = new Div(op1, op2);
        EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivStringifyNormalValues){
        Op* op1 = new Op(8);
        Op* op2 = new Op(4);
        Div* test  = new Div(op1, op2);
        EXPECT_EQ(test->stringify(), "8.000000/4.000000");
}

TEST(DivTest, DivZeroEvaluate){
        Op* op1 = new Op(0);
        Op* op2 = new Op(4);
        Div* test  = new Div(op1, op2);
        EXPECT_EQ(test->evaluate(), 0);
}

TEST(DivTest, DivZeroStringify){
        Op* op1 = new Op(0);
        Op* op2 = new Op(4);
        Div* test  = new Div(op1, op2);
        EXPECT_EQ(test->stringify(), "0.000000/4.000000");
}

TEST(DivTest, DivOneNegEvaluate){
        Op* op1 = new Op(-8);
        Op* op2 = new Op(4);
        Div* test  = new Div(op1, op2);
        EXPECT_EQ(test->evaluate(), -2);
}

TEST(DivTest, DivOneNegStringify){
        Op* op1 = new Op(-8);
        Op* op2 = new Op(4);
        Div* test  = new Div(op1, op2);
        EXPECT_EQ(test->stringify(), "-8.000000/4.000000");
}

TEST(DivTest, DivTwoNegEvaluate){
        Op* op1 = new Op(-8);
        Op* op2 = new Op(-4);
        Div* test  = new Div(op1, op2);
        EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivTwoNegStringify){
        Op* op1 = new Op(-8);
        Op* op2 = new Op(-4);
        Div* test  = new Div(op1, op2);
        EXPECT_EQ(test->stringify(), "-8.000000/-4.000000");
}


TEST(DivTest, DecDividedByDecEvaluate){
	Op* op1 = new Op(2.2222);
	Op* op2 = new Op(-1.1111);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->evaluate(), -2);
}

TEST(DivTest, DecDividedByDecStringify){
	Op* op1 = new Op(2.2222);
	Op* op2 = new Op(-1.1111);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->stringify(), "2.222200/-1.111100");
}

TEST(DivTest, AddDividedByNumEvaluate){
	Base* four = new Op(4);
	Base* six = new Op(6);
	Base* two = new Op(2);
	Add* ten = new Add(four, six);
	Div* test = new Div(ten, two);
	EXPECT_EQ(test->evaluate(), 5);
}

TEST(DivTest, AddDividedByNumStringify){
        Base* six = new Op(6);
        Base* four = new Op(4);                                                                                                 
        Base* two = new Op(2);
        Add* ten = new Add(four, six);
        Div* test = new Div(ten, two);
        EXPECT_EQ(test->stringify(), "4.000000 + 6.000000/2.000000");
}

TEST(DivTest, DivByZeroEvaluate){
	Op* op1 = new Op(8);
	Op* op2 = new Op(0);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->evaluate(), -1);
}

TEST(DivTest, DivByZeroStringify){
	Op* op1 = new Op(8);
	Op* op2 = new Op(0);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->stringify(), "-1");
}

TEST(DivTest, DivZeroByZeroEvaluate){
	Op* op1 = new Op(0);
	Op* op2 = new Op(0);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->evaluate(), -1);

}

TEST(DivTest, DivZeroByZeroStringify){
	Op* op1 = new Op(0);
	Op* op2 = new Op(0);
	Div* test = new Div(op1, op2);
	EXPECT_EQ(test->stringify(), "-1");
}

#endif //__DIV_TEST_HPP__
