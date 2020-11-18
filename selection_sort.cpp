#include "selection_sort.hpp"

void SelectionSort::sort(Container* container){
	int min;
	int length= container->size();
	for (int i=0; i< length-1; i++){
		min = i;
		for(int j = i+1; j< length; j++){
			if(container->at(j)->evaluate() < container->at(min)->evaluate()){
				min=j;
			}
		}
		container->swap(min,i);
	}
}
