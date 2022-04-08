// TOPIC : Pure Virtual Function

// SYNTAX: virtual returntype functionnanetparaneters...i . a;

// NOTES:

//      1.  If the pure virtual function is not overritten into the derived class and if we are not created the object of that derived class 
//          then code will comile successfully. if we try to create the object of that derived class then compiler will through error. 
//          But we can create pointer of the derived class.

//      0.  If some class can have only signature of function but not the body then we use pure virtual functions.
//      1.  Sometimes in Base class we know the function none but not the definition of the function. 
//          so he want Derived classes to provide the definition of the function.

//      2. we can actually give body of pure virtual function.

//      3. If you have pure virtual function in your class. it means that class is an Abstract class and

// USE CASE:

// 1. Used to create abstract classes. which helps in creating interfaces (APIs)



#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print() = 0;
};

class Derived1 : public Base
{
public:
    void print()
    {
        cout << "Base::print()" << endl;
    }
};

class Derived2 : public Base
{
public:
};

int main()
{

    Base *b = new Derived1;
    Derived2 *d;
    b = d;
    b->print();

    return 0;
}