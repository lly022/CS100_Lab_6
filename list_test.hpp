#ifndef __LIST_TEST_HPP__
#define __LIST_TEST_HPP__

#include "gtest/gtest.h"

#include "listContainer.hpp"
#include "op.hpp"
#include "add.hpp"
#include "mult.hpp"

TEST(ListContainerTestSet, AddElementTest) {
	Op* seven = new Op(7);
	ListContainer* test_container= new ListContainer();
	test_container->add_element(seven);
	ASSERT_EQ(test_container->size(), 1);
	EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(ListContainerTestSet, AtTest) {
        Op* seven = new Op(7);
	Op* two = new Op(2);
	Op* three = new Op(3);
	Add* five = new Add(two,three);
        ListContainer* test_container= new ListContainer();
        test_container->add_element(seven);
	test_container->add_element(five);
        ASSERT_EQ(test_container->size(), 2);
        EXPECT_EQ(test_container->at(0)->evaluate(), 7);
	EXPECT_EQ(test_container->at(1)->evaluate(), 5);
}

TEST(ListContainerTestSet, SwapTest) {
        Op* seven = new Op(-7);
        Op* two = new Op(-2);
        Op* three = new Op(-3);
        Add* five = new Add(two,three);
        ListContainer* test_container= new ListContainer();
        test_container->add_element(seven);
        test_container->add_element(five);
	test_container->swap(0,1);
        ASSERT_EQ(test_container->size(), 2);
        EXPECT_EQ(test_container->at(0)->evaluate(), -5);
        EXPECT_EQ(test_container->at(1)->evaluate(), -7);
}

TEST(ListContainerTestSet, SizeTest) {
        Op* seven = new Op(7);
        Op* two = new Op(2);
        Op* three = new Op(3);
        Add* five = new Add(two,three);
	Op* four = new Op(4);
	Op* six = new Op(6);
	Mult* twoFour = new Mult(four,six);
	Op* one = new Op(1);
	Op* eight= new Op(8);
        ListContainer* test_container= new ListContainer();
        test_container->add_element(seven);
        test_container->add_element(five);
	test_container->add_element(twoFour);
	test_container->add_element(one);
	test_container->add_element(eight);
        EXPECT_EQ(test_container->size(), 5);
}


#endif
