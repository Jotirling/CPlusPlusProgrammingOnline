//============================================================================
// Name        : adaptor_design_pattern.cpp
// Author      : Jotirling Swami
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// *** Structural Design Pattern ***
//	These design patterns are about organizing different classes and objects to form larger structures and provide
//	new functionality. Structural design patterns are
//			1. Adapter
//			2. Bridge
//			3. Composite
//			4. Decorator
//			5. Facade
//			6. Flyweight
//			7. Private Class Data
//			8. Proxy.


//	1. Adaptor : (Charging Adapter)
//	When 2 interfaces are not compatible with each other and want to establish a relationship between them through an adapter it's called an adapter design pattern.
//	The adapter pattern converts the interface of a class into another interface or class that the client expects, i.e adapter lets classes work together that could not otherwise because of incompatibility. so in these types of incompatible scenarios, we can go for the adapter pattern.

#include <iostream>
#include <memory>
using namespace std;

// This is interface class for charger
class IndianSocket {
public:
	virtual void indiancharge(int) = 0;
	virtual ~IndianSocket() {
	}
};
// This is some socket which we want to use (Adaptee)
class USASocket {
public:
	void usacharge() {
		cout << "USA plug is charging" << endl;
	}
};

class GermanSocket {
public:
	void gcharge() {
		cout << "German Socket plug is charging" << endl;
	}
};

// This is the Adapter, used to charge with USASocket
class SocketAdapter: public IndianSocket, public USASocket, public GermanSocket {
public:
	void indiancharge(int type) {
		switch (type) {
		case 1:
			usacharge();
			break;
		case 2:
			gcharge();
			break;
		default:
			break;
		}
	}
};

// This is kind of Mobile which is using Charger for charging.
int main() {
	unique_ptr<IndianSocket> socket = make_unique<SocketAdapter>();
	socket->indiancharge(1);
	socket->indiancharge(2);
	return 0;
}
