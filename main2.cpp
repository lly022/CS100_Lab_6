#include <iostream>

#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "Div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "rand.hpp"
#include "pow.hpp"
#include "VectorContainer.hpp"
#include "listContainer.hpp"
#include "selection_sort.hpp"
#include "BubbleSort.hpp"

using namespace std;

int main(){
	VectorContainer* vcBubble = new VectorContainer();
	VectorContainer* vcSelection = new VectorContainer();
	ListContainer* lcBubble = new ListContainer();
	ListContainer* lcSelection = new ListContainer();
	Op* three = new Op(3);
	Op* seven = new Op(7);
	Op* four = new Op(4);
	Op* two = new Op(2);
	Op* ten = new Op(10);
	Op* one = new Op(9);
	Mult* TreeA = new Mult(seven, four);
	Add* TreeB = new Add(three, two);
	Sub* TreeC = new Sub(ten, one);

	vcBubble->add_element(TreeA);
	vcBubble->add_element(TreeB);
	vcBubble->add_element(TreeC);
	vcSelection->add_element(TreeA);
	vcSelection->add_element(TreeB);
	vcSelection->add_element(TreeC);

	lcBubble->add_element(TreeA);
	lcBubble->add_element(TreeB);;
	lcBubble->add_element(TreeC);
	lcSelection->add_element(TreeA);
	lcSelection->add_element(TreeB);
	lcSelection->add_element(TreeC);

	cout << "VectorContainer1 before BubbleSort: ";
	cout << vcBubble->at(0)->evaluate() << ", " << vcBubble->at(1)->evaluate() << ", " << vcBubble->at(2)->evaluate() << endl;
	cout << "VectorContainer1 size: " << vcBubble->size() << endl;
	cout << "VectorContainer2 before SelectionSort: ";
        cout << vcSelection->at(0)->evaluate() << ", " << vcSelection->at(1)->evaluate() << ", " << vcSelection->at(2)->evaluate() << endl;
	cout << "VectorContainer2 size: " << vcSelection->size() << endl;
	cout << "ListContainer1 before BubbleSort: ";
        cout << lcBubble->at(0)->evaluate() << ", " << lcBubble->at(1)->evaluate() << ", " << lcBubble->at(2)->evaluate() << endl;
	cout << "ListContainer1 size: " << lcBubble->size() << endl;
	cout << "ListContainer2 before SelectionSort: ";
        cout << lcSelection->at(0)->evaluate() << ", " << lcSelection->at(1)->evaluate() << ", " << lcSelection->at(2)->evaluate() << endl;
	cout << "ListContainer2 size: " << lcSelection->size() << endl << endl;

	vcBubble->set_sort_function(new BubbleSort());
	vcBubble->sort();

	vcSelection->set_sort_function(new SelectionSort());
	vcSelection->sort();

	lcBubble->set_sort_function(new BubbleSort());
	lcBubble->sort();

	lcSelection->set_sort_function(new SelectionSort());
	lcSelection->sort();

	cout << "VectorContainer1 after BubbleSort: ";
        cout << vcBubble->at(0)->evaluate() << ", " << vcBubble->at(1)->evaluate() << ", " << vcBubble->at(2)->evaluate() << endl;
	cout << "VectorContainer1 size: " << vcBubble->size() << endl;
	cout << "VectorContainer2 after SelectionSort: ";
        cout << vcSelection->at(0)->evaluate() << ", " << vcSelection->at(1)->evaluate() << ", " << vcSelection->at(2)->evaluate() << endl;
	cout << "VectorContainer2 size: " << vcSelection->size() << endl;
	cout << "ListContainer1 after BubbleSort: ";
        cout << lcBubble->at(0)->evaluate() << ", " << lcBubble->at(1)->evaluate() << ", " << lcBubble->at(2)->evaluate() << endl;
	cout << "ListContainer1 size: " << lcBubble->size() << endl;
	cout << "ListContainer2 after SelectionSort: ";
        cout << lcSelection->at(0)->evaluate() << ", " << lcSelection->at(1)->evaluate() << ", " << lcSelection->at(2)->evaluate() << endl;
	cout << "ListContainer2 size: " << lcSelection->size() << endl;
	
	return 0;
}

