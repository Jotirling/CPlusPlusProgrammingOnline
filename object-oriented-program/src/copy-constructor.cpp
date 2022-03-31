/*
 * copy-constructor.cpp
 *
 *  Created on: 17-Mar-2022
 *      Author: Jotirling Swami
 */

#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
	char *s;
	int size;

public:
	String()
	{
		s = NULL;
		size = 0;
	}

	String(const char *str)
	{
		size = strlen(str);
		s = new char[size + 1];
		strcpy(s, str);
	}

	String(const String &old_str)
	{
		cout << "copy constructor" << endl;

		size = old_str.size;
		s = new char[size + 1];
		strcpy(s, old_str.s);
	}

	String &operator=(String &old_str)
	{
		cout << "assignment Operator" << endl;

		size = old_str.size;
		s = new char[size + 1];
		strcpy(s, old_str.s);

		return *this;
	}

	void print()
	{
		cout << s << endl;
	} // Function to print string
	void change(const char *str)
	{
		delete[] s;
		size = strlen(str);
		s = new char[size + 1];
		strcpy(s, str);
	}

	~String()
	{
		delete[] s;
	} // destructor
};

int main()
{
	String str1("GeeksQuiz");
	String str2 = str1;

	str1.print();
	str2.print();

	cout << "after change" << endl;
	str2.change("GeeksforGeeks");

	str1.print();
	str2.print();

	str2 = str1;

	str1.print();
	str2.print();

	str2.change("GeeksforGeeks");
	cout << "after change" << endl;
	str1.print();
	str2.print();

	return 0;
}
