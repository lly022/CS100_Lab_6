#ifndef __SELECTION_SORT__
#define __SELECTION_SORT__

#include "sort.hpp"
#include "container.hpp"

class SelectionSort : public Sort{
	public:
		void sort(Container* container);
};

#endif
