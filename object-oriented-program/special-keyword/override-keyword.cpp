/*
 * override-keyword.cpp
 *
 *  Created on: 15-Mar-2022
 *      Author: jotip
 */

//	What is override keyword in C++?
//		Answer 1: Testing become easy with this.. (easy maintenance)
//		Answer 2: Compile time check can be performed.. (future error could be reduced)
#include <iostream>
class Base {
	int b_var;
public:
	virtual void fun() {
		std::cout << "Base fun" << std::endl;
	}
};
class Derived: public Base {
	int d_var;
public:
	void fun() override {
		std::cout << "Derived fun" << std::endl;
	}
};

int main() {
	Base *b = new Derived();
	b->fun();
	return 0;
}
