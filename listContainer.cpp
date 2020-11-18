#include "listContainer.hpp"
#include <list>

using namespace std;

ListContainer::ListContainer(){ };

ListContainer::ListContainer(Sort* function) { };

void ListContainer::add_element(Base* element){
	listContainer.push_back(element);
}

void ListContainer::print() {
	for(auto it : listContainer) {
		cout << it->stringify() << ", ";
	}
	cout << endl;
}

void ListContainer::sort() {
	if(sort_function != nullptr) {
		sort_function->sort(this); 
	}
	else {
		cout << "Add throw exception" << endl;
	}
}

void ListContainer::swap(int i ,int j){
	auto it1 = listContainer.begin();
	while( i> 0){
		it1++;
		i--;
	}
	auto it2 = listContainer.begin();
	while( j>0){
		it2++;
		j--;
	}
	Base* x = *it1;
	Base* y = *it2;
	*it1=y;
	*it2=x;
}

Base* ListContainer::at(int i){
	auto it =listContainer.begin();
	while(i > 0) {
		it++;
		i--;
	}
	return *it;
}

int ListContainer::size(){
	return listContainer.size();
}
