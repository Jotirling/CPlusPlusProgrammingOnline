/*
 * interview-questing-1.cpp
 *
 *  Created on: 18-Mar-2022
 *      Author: Jotirling Swami
 */

//  1. Find out correct bracket closing loop from given example.
#include <iostream>
#include <stack>

using namespace std;

#ifndef NULL
int main()
{
	string str = "[ [ [ {} {} ]]] {}";
	stack<char> Stack;
	for (size_t i = 0; i < str.length(); i++)
	{
		if ('{' == str[i])
			Stack.push(str[i]);
		else if ('}' == str[i])
		{
			Stack.pop();
		}
		else if ('[' == str[i])
		{
			Stack.push(str[i]);
		}
		else if (']' == str[i])
		{
			Stack.pop();
		}
	}

	if (Stack.empty())
	{
		cout << "Valid" << endl;
	}
	else
	{
		cout << "Not Valid" << endl;
	}
}
#endif

//  2. reverse the int value.
//		Example Input Value = 123 Then Output Value = 321.

#include <iostream>
using namespace std;

// #ifndef NULL
int main()
{
	int number, reverse_number = 0;
	cout << "Enter a number to reverse value:"; // allow user to enter a number
	cin >> number;								// takes value from user
	while (number != 0)
	{
		reverse_number = reverse_number * 10 + number % 10;
		number = number / 10;
	}
	cout << "Reverse of entered number is:";
	cout << reverse_number; // print reverse value
	return 0;
}
// #endif

//  3. reverse string from array
#include <iostream>
#include <cstring>

using namespace std;

#ifndef NULL
int main()
{
	char charVar = '&';
	cout << (int)charVar << endl;

	char strArray[] = "Jotirling Swami Priya";
	int len = strlen(S);
	for (int i = 0; i < len / 2; ++i)
	{
		char temp = strArray[len - i - 1];
		strArray[len - i - 1] = strArray[i];
		strArray[i] = temp;
	}
	cout << S << endl;
}
#endif

//  3. seperate word from char array

#include <iostream>
#include <cstring>

using namespace std;

#ifndef NULL
int main()
{
	char strArray[] = "Jotirling Swami Priya";
	int i = 0;
	string chunk;
	char *array[4];
	while (strArray[i] != '\0')
	{
		if (strArray[i] == ' ')
		{
			cout << chunk << " ";
			chunk = "";
		}

		chunk.push_back(strArray[i]);
		i++;
	}
	cout << chunk << " ";
}
#endif

//  3. What printf and scanf return

#include <iostream>
using namespace std;

int main(){
	int prinftRet = printf("%s", "Hello JotiPfiya!!!\n");
	printf("prinftRet:%d", prinftRet);
    printf("\n");

 	int intValue = 0;
 	char charValue[100];
 	int scanfRet = scanf("%s %d", &charValue, &intValue);
 	printf("scanfRet: %d", scanfRet);

    return 0;
}


//  sizeof is function or array in c

// POINTS:
// 1. Its as an Operator not a function
// 2. This is evaluated at compile time not run time
// 3. It does not perform the operation given as an expression
// 4. Parentheses are optional.

// Online C compiler to run C program online
#include <stdio.h>

int funcInt(){
	printf("called funcInt");
}
double funcDouble(){
	printf("called funcDouble");
}

int main(){
    // at compile time it replaced with printf("%ld\n", 4); because of the return type
    // "called funcInt" will not print on the console 
    // Parentheses are optional
	printf("%ld\n", sizeof funcInt() );	
    // at compile time it replaced with printf("%ld\n", 8); because of the return type
    // "called funcDouble" will not print on the console 
    // Parentheses are optional
	printf("%ld\n", sizeof(funcDouble()) );	// Parentheses are optional
	
	int value = 0;
	printf("%ld\n", sizeof value );	// Parentheses are optional
	return 0;
}

//  function pointer and function delecration

#include <stdio.h>

int funcInt(){
	return 5;
}

int main(){
	// int *fun (); // function declearation
	int (*fun) (); // function pointer
	
	fun = funcInt; // if we use function declearation instead of function pointer will have compilation issue at this line
	printf("%d\n", fun() );	// Parentheses are optional
	return 0;
}

//Discussion on below points
// const char * ptr OR char const * ptr
// char * const ptr
// const char * const ptr

// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    //------------------------------------------------------------
    const char a = 'A';
    const char b = 'B';
    
    // a = 'C'; // error: assignment of read-only variable 'a' 
    
    const char * ptrA = &a;    // Once its initiated we can change the Address where its pointing but we can not change the value of the pointer 
    std::cout << *ptrA << std::endl; // A

    ptrA = &b; 
    std::cout << *ptrA << std::endl; // B
    
    // *ptrA = b; // error: assignment of read-only location '* ptrA'
    
    //------------------------------------------------------------
    
    char p = 'P';
    
    char* const ptrP = &p; // Once its initiated we can change the value of the pointer but not the Address where it's pointing to
    std::cout << *ptrP << std::endl; // P
    
    *ptrP = 'Q';
    std::cout << *ptrP << std::endl; // Q
    
    char q = 'Q';
    char * ptrQ = &q;
    
    *ptrP = *ptrQ;
    std::cout << *ptrP << std::endl; // Q

    // ptrP = ptrQ;    // error: assignment of read-only variable 'ptrP'
    // ptrP = &q;          // error: assignment of read-only variable 'ptrP'
    
    //------------------------------------------------------------
    
    const char x = 'X';
    
    const char* const ptrX = &x; // once its initiated then we can not change the value of the ptr OR Address of the ptr where it's pointing to
    
    std::cout << *ptrX << std::endl; // P
    
    const char y = 'Y';
    const char * ptrY = &y;
    
    // ptrX = ptrY;    // error: assignment of read-only variable 'ptrX'
    // ptrX = &y;      // error: assignment of read-only variable 'ptrX'
    // *ptrX = y; // error: assignment of read-only location '*(const char*)ptrX'

    //------------------------------------------------------------
    return 0;
}



