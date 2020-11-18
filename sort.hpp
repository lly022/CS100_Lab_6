#ifndef __SORT_HPP__
#define __SORT_HPP__

#include "container.hpp"

class Container;

class Sort {
    public:
        /* Constructors */
	 //Make sure you implement the default constructor inside the Sort class and not the subclasses as they will be using the default constructor
        Sort() { };


        /* Pure Virtual Functions */
        virtual void sort(Container* container) = 0;
};

#endif //__SORT_HPP__
