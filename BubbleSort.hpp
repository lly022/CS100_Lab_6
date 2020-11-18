#ifndef __BUBBLESORT_HPP__
#define __BUBBLESORT_HPP__

#include "sort.hpp"
#include "base.hpp"

class BubbleSort : public Sort{
	public:
		BubbleSort();
		void sort(Container* container);
	
};
#endif //__BUBBLESORT_HPP__
