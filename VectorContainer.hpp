#ifndef __VECTORCONTAINER_HPP__
#define __VECTORCONTAINER_HPP__

#include "container.hpp"
#include "base.hpp"
#include <vector>
#include <iostream>

class VectorContainer : public Container{
	protected:
		std::vector <Base*> VectContainer;
	public:
		VectorContainer();

		VectorContainer(Sort* function); 

		void add_element(Base* element);

		void print();

		void sort();

		//Functions needed to sort because the sort functions must use this homogeneous interface
		void swap(int i, int j);

		Base* at(int i);

		int size();
		
};

#endif //__VECTORCONTAINER_HPP__
