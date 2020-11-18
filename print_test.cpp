
#include "listContainer.hpp"
#include "add.hpp"
#include "mult.hpp"
#include "op.hpp"

#include <iostream>

int main(){
	Op* one = new Op(1);
	Op* two = new Op(2);
	Add* three = new Add(one,two);

	Op* four = new Op(4);
        Op* five = new Op(5);
        Add* nine = new Add(four,five);

	Op* six = new Op(6);
        Op* seven = new Op(7);
        Mult* fourTwo = new Mult(six,seven);

	ListContainer* test_container= new ListContainer();
	test_container->add_element(three);
	test_container->add_element(nine);
	test_container->add_element(fourTwo);
	test_container->print();
	return 0;
}
