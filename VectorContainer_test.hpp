#ifndef __VECTORCONTAINER_TEST_HPP__
#define __VECTORCONTAINER_TEST_HPP__

#include "gtest/gtest.h"
#include "VectorContainer.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "Div.hpp"
#include "pow.hpp"
#include "rand.hpp"

TEST(VectorContainerTestSet, AtTest){
	Op* ten = new Op(10);
	Op* nine = new Op(9);
	Op* eight = new Op(8);
	Op* seven = new Op(7);
	VectorContainer* test_container = new VectorContainer();
	
	test_container->add_element(ten);
	test_container->add_element(eight);
	test_container->add_element(nine);
	test_container->add_element(seven);

	EXPECT_EQ(test_container->at(0)->evaluate(), 10);
	EXPECT_EQ(test_container->at(1)->evaluate(), 8);
	EXPECT_EQ(test_container->at(2)->evaluate(), 9);
	EXPECT_EQ(test_container->at(3)->evaluate(), 7);
}

TEST(VectorContainerTestSet, SizeTest){
	Op* one = new Op(1);
	Op* two = new Op(2);
	Op* three = new Op(3);
	Op* six = new Op(6);
	VectorContainer* test_container = new VectorContainer();
	
	test_container->add_element(one);
	test_container->add_element(two);
	test_container->add_element(three);
	test_container->add_element(six);
	
	EXPECT_EQ(test_container->size(), 4);
} 

TEST(VectorContainerTestSet, AddElementTest){
	Op* seven = new Op(7);
	VectorContainer* test_container = new VectorContainer();

	test_container->add_element(seven);
	
	ASSERT_EQ(test_container->size(), 1);
	EXPECT_EQ(test_container->at(0)->evaluate(), 7);
}

TEST(VectorContainerTestSet, SwapTest){
	Op* seven = new Op(7);
	Op* six = new Op(6);
	Op* five = new Op(5);
	VectorContainer* test_container = new VectorContainer();

	test_container->add_element(seven);
	test_container->add_element(six);
	test_container->add_element(five);
	test_container->swap(0, 2);
	
	EXPECT_EQ(test_container->at(0)->evaluate(), 5);
	EXPECT_EQ(test_container->at(2)->evaluate(), 7);
	ASSERT_EQ(test_container->size(), 3);
}

#endif
