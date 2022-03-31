/*
 * static-object-static-function.cpp
 *
 *  Created on: 14-Mar-2022
 *      Author: jotip
 */
// 	static member function
//	1. static member functions do not have this pointer.
//  2.

#include <iostream>
using namespace std;
class Test {
   static Test * fun() {
     return this; // compiler error
   }
};

int main()
{
	Test T;
   return 0;
}



