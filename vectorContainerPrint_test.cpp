#include "VectorContainer.hpp"
#include "sub.hpp"
#include "Div.hpp"
#include "op.hpp"

#include <iostream>

int main(){
	Op* seven = new Op(7);
	Op* four = new Op(4);
	Sub* three = new Sub(seven, four);

	Op* ten = new Op(10);
        Op* one = new Op(1);
        Sub* nine = new Sub(ten, one);

	Op* fourEight = new Op(48);
        Op* twelve = new Op(12);
        Div* anotherFour = new Div(fourEight, twelve);

	VectorContainer* test_container= new VectorContainer();
	test_container->add_element(three);
	test_container->add_element(nine);
	test_container->add_element(anotherFour);
	test_container->print();
	return 0;
}

