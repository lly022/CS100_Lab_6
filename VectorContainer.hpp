#include "container.hpp"
#include "base.hpp"
#include <vector>

class VectorContainer : public Container{
	protected:
		vector <Base*> VectContainer;
	public:
		VectorContainer() : Container(){
		}
		
		void set_sort_function(Sort* sort_function){
			this->sort_function = sort_function;
		}

		void add_element(Base* element){
			VectContainer.push_back(element);
		}

		void print(){
			for(int i = 0; i < VectContainer.size(); i++){
				VectContainer[i]->stringify();
			}
		}

		void sort(){
			
		}

		void swap(int i, int j){
		}

		Base* at(int i){
			
		}

		int size(){
			return VectContainer.size();
		}	
		
};
