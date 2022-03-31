/*
 * mutable-keyword in class.cpp
 *
 *  Created on: 14-Mar-2022
 *      Author: jotip
 */

//	Mutable-keyword in class
//		1. The mutable storage class specifier in C++ (or use of mutable keyword in C++)
//		2. auto, register, static and extern are the storage class specifiers in C.
//		3. typedef is also considered as a storage class specifier in C. C++ also supports all these storage class specifiers.
//		4. In addition to this C++, adds one important storage class specifier whose name is mutable.
//
//	What is the need of mutable?
//		1. We can change the class data member via const class object of class through the const member function.
//		3. By using mutable keyword in front of the variable in class we can update/change the value of variable in const member function.

#include <iostream>
using namespace std;

// Customer Class
class Customer {
	// class Variables
	string name;
	mutable int bill;

public:
	// constructor
	Customer(string s, int p) {
		name = s;
		bill = p;
	}
	void changeName(string p) {
		name = p;
	}
	// change the bill
	void changeBill(int b) const {
		bill = b;
	}
	// to display
	void display() const {
		cout << "Customer name is: " << name << endl;
		cout << "Total payable amount: " << bill << endl;
	}
};

// Driver code
int main() {
	const Customer c1("Pravasi Meet", 100);
	c1.display();
	c1.changeBill(150);
	c1.display();

	Customer c2("Pravasi Meet", 100);
	c2.display();
	c2.changeBill(150);
	c2.display();

	return 0;
}
