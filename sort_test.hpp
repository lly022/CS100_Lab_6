#ifndef __SORT_TEST_HPP__
#define __SORT_TEST_HPP__

#include "gtest/gtest.h"
#include "BubbleSort.hpp"
#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "Div.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "VectorContainer.hpp"
#include "listContainer.hpp"

TEST(BubbleTestSet, BubbleSortVectorContainerTest){
        Op* seven = new Op(7);
        Op* four = new Op(4);
        Mult* TreeA = new Mult(seven, four);

        Op* three = new Op(3);
        Op* two = new Op(2);
        Add* TreeB = new Add(three, two);

        Op* ten = new Op(10);
        Op* six = new Op(6);
        Sub* TreeC = new Sub(ten, six);

        VectorContainer* container = new VectorContainer();
  	container->add_element(TreeA);
        container->add_element(TreeB);
        container->add_element(TreeC);

        ASSERT_EQ(container->size(), 3);
        EXPECT_EQ(container->at(0)->evaluate(), 28);
        EXPECT_EQ(container->at(1)->evaluate(), 5);
        EXPECT_EQ(container->at(2)->evaluate(), 4);

        container->set_sort_function(new BubbleSort());
        container->sort();

        ASSERT_EQ(container->size(), 3);
        EXPECT_EQ(container->at(0)->evaluate(), 4);
        EXPECT_EQ(container->at(1)->evaluate(), 5);
        EXPECT_EQ(container->at(2)->evaluate(), 28);
}

TEST(BubbleTestSet, BubbleSortListContainerTest){
        Op* twelve = new Op(12);
        Op* four = new Op(4);
        Div* TreeA = new Div(twelve, four);

        Op* five = new Op(5);
        Op* six = new Op(6);
        Add* TreeB = new Add(five, six);

        Op* three = new Op(3);
	Op* two = new Op(2);
        Pow* TreeC = new Pow(three, two);

        ListContainer* container = new ListContainer();
        container->add_element(TreeA);
        container->add_element(TreeB);
        container->add_element(TreeC);

        ASSERT_EQ(container->size(), 3);
        EXPECT_EQ(container->at(0)->evaluate(), 3);
        EXPECT_EQ(container->at(1)->evaluate(), 11);
        EXPECT_EQ(container->at(2)->evaluate(), 9);

        container->set_sort_function(new BubbleSort());
        container->sort();

        ASSERT_EQ(container->size(), 3);
        EXPECT_EQ(container->at(0)->evaluate(), 3);
        EXPECT_EQ(container->at(1)->evaluate(), 9);
        EXPECT_EQ(container->at(2)->evaluate(), 11);
}

#endif //__SORT_TEST_HPP__
