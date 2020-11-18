#include "VectorContainer.hpp"

VectorContainer::VectorContainer(){
} 

VectorContainer::VectorContainer(Sort* function){
} 

void VectorContainer::add_element(Base* element){
	VectContainer.push_back(element);
}

void VectorContainer::print(){
	for(int i = 0; i < VectContainer.size()-1; i++){
		std::cout << VectContainer[i]->stringify();
		std::cout << ", ";
	}
	std::cout << VectContainer.back()->stringify() << std::endl;
}

void VectorContainer::sort(){
	int x = -1;
	try{
		if(sort_function == nullptr){
			throw x;
		}
	}
	catch(int x){
		std::cout << "sort_function is null \n";
	}
	sort_function->sort(this);
}

void VectorContainer::swap(int i, int j){
	Base* temp = VectContainer[i];
	VectContainer[i] = VectContainer[j];
	VectContainer[j] = temp;
}

Base* VectorContainer::at(int i){
	return VectContainer[i];
}

int VectorContainer::size(){
	return VectContainer.size();
} 
