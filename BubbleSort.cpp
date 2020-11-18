#include "BubbleSort.hpp"

BubbleSort::BubbleSort(){
}

void BubbleSort::sort(Container* container){
	int i;
	int j;
	int flag = 1;
	int containerLength = container->size();
	for(i = 1; (i <= containerLength) && flag; i++){
		flag = 0;
		for(j = 0; j < containerLength - 1; j++){
			if(container->at(j+1)->evaluate() < container->at(j)->evaluate() ){
				container->swap(j, j+1);
				flag = 1;
			}
		}
	}
	return;
}
