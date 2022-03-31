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
int main() {
	string str = "[ [ [ {} {} ]]] {}";
	stack<char> Stack;
	for (size_t i = 0; i < str.length(); i++) {
		if ('{' == str[i])
			Stack.push(str[i]);
		else if ('}' == str[i]) {
			Stack.pop();
		} else if ('[' == str[i]) {
			Stack.push(str[i]);
		} else if (']' == str[i]) {
			Stack.pop();
		}
	}

	if (Stack.empty()) {
		cout << "Valid" << endl;
	}else{
		cout << "Not Valid" << endl;
	}
}
#endif

//  2. reverse the int value.
//		Example Input Value = 123 Then Output Value = 321.

#include <iostream>
using namespace std;

#ifndef NULL
int main() {
	int variable, reminder, reverse;

	cout << "Enter Number: ";
	cin >> variable;

	while (variable != 0) {
		reminder = variable % 10;
		reverse = reverse * 10 + reminder;
		variable /= 10;
	}
	cout << "reverse variable: " << reverse << endl;
	return 0;
}
#endif

//  3. reverse string from array
#include <iostream>
#include <cstring>

using namespace std;

//#ifndef NULL
int main() {
	char charVar = '&';
	cout << (int) charVar << endl;
	char S[] = "Jotirling Swamiriya";
	int len = strlen(S);
	for (int i = 0; i < len / 2; ++i)
		std::swap(S[i], S[len - i - 1]);
	cout << S << endl;
}
//#endif

