#ifndef __LISTCONTAINER_HPP__
#define __LISTCONTAINER_HPP__

#include "container.hpp"
#include "base.hpp"
#include <list>
#include <iostream>

using namespace std;

class ListContainer : public Container{
	private:
		list<Base*> listContainer;
	public:
		ListContainer();
		ListContainer(Sort* function);
		void add_element(Base* element);
		void print();
		void sort();
		void swap(int i, int j);
		Base* at(int i);
		int size();
};
#endif
