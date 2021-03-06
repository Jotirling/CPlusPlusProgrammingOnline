/*
 * advantage-of-vector-over-array.cpp
 *
 *  Created on: 17-Mar-2022
 *      Author: Jotirling Swami
 */

//	Advantages of Vector over arrays :
//		1. Vector is template class and is C++ only construct whereas arrays are built-in
//  		language construct and present in both C and C++.
//		2. Vector are implemented as dynamic arrays with list interface whereas arrays 
//			can be implemented as statically or dynamically with primitive data type

#include <iostream>
using namespace std;

#ifndef NULL
int main()
{
    int array[100]; // Static Implementation
    int* arr = new int[100]; // Dynamic Implementation
    vector<int> v; // Vector's Implementation
    return 0;
}
#endif

//		3. Size of arrays are fixed whereas the vectors are resizable i.e
//			they can grow and shrink as vectors are allocated on heap memory.

#include <iostream>
using namespace std;

#ifndef NULL
int main() {
	int array[100]; // Static Implementation

	cout << "Size of Array " << sizeof(array) / sizeof(array[0]) << "\n";

	vector<int> v; // Vector's Implementation

	// Inserting Values in Vector
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	cout << "Size of vector Before Removal=" << v.size() << "\n";

	// Output Values of vector
	for (auto it : v)
		cout << it << " ";

	v.erase(v.begin() + 2); // Remove 3rd element

	cout << "\nSize of vector After removal=" << v.size() << "\n";

	// Output Values of vector
	for (auto it : v)
		cout << it << " ";

	return 0;
}
//	Output:
//		Size of Array 100
//		Size of vector Before Removal=5
//		1 2 3 4 5
//		Size of vector After removal=4
//		1 2 4 5
#endif

//		4. Arrays have to be deallocated explicitly if defined dynamically whereas vectors are automatically de-allocated from heap memory.

#include <iostream>
using namespace std;

#ifndef NULL
int main() {
	int *arr = new int[100]; // Dynamic Implementation
	delete[] arr; // array Explicitly deallocated

	vector<int> v; // Automatic deallocation when variable goes out of scope
	return 0;
}
#endif

//
//		5. Size of array cannot be determined if dynamically allocated whereas Size of the vector can be determined in O(1) time.
//		6. When arrays are passed to a function, a separate parameter for size is also passed whereas in case of
//			passing a vector to a function, there is no such need as vector maintains variables
//			which keeps track of size of container at all times.

#include <iostream>
using namespace std;

#ifndef NULL
int main() {
	int *arr = new int[100]; // Dynamic Implementation

	cout << "Size of array= ";
	cout << sizeof(arr) / sizeof(*arr) << "\n"; // Pointer cannot be used to get size of
	// block pointed by it
	return 0;
}

//	Output:
//		Size of array= 2
#endif

//		7. When array becomes full and new elements are inserted; no reallocation is done implicitly
//			whereas When vector becomes larger than its capacity, reallocation is done implicitly.
//		8. Arrays cannot be returned unless dynamically allocated from a function whereas vectors can be returned from a function.

// Program to demonstrate arrays cannot be returned
#include <iostream>
using namespace std;

#ifndef NULL
int* getValues() {

	int arr[10]; // Array defined locally
	for (int i = 0; i < 10; i++) // Putting Values in array
		arr[i] = i + 1;

	return arr; // returning pointer to array
}

int main() {

	int *array; // pointer of int type

	array = getValues(); // Call function to get arr

	for (int i = 0; i < 10; i++) { // Printing Values
		cout << "*(array + " << i << ") : ";
		cout << *(array + i) << endl;
	}

	return 0;
}
//	Output:
//		warning: address of local variable 'arr' returned [-Wreturn-local-addr]
//		Segmentation Fault (SIGSEGV)
#endif

// Program to demonstrate vector can be returned
#include <iostream>
using namespace std;

#ifndef NULL
// Function returning vector
vector<int> getValues() {

	vector<int> v; // Vector defined locally
	for (int i = 0; i < 10; i++) // Inserting values in Vector
		v.push_back(i + 1);

	return v; // returning pointer to array
}

// main function
int main() {

	vector<int> get;

	get = getValues(); // Call function to get v

	// Output Values of vector
	for (auto it : get)
		cout << it << " ";

	return 0;
}
//	Output:
//		1 2 3 4 5 6 7 8 9 10
#endif

//		9. Arrays cannot be copied or assigned directly whereas Vectors can be copied or assigned directly.

#include <iostream>
using namespace std;

#ifndef NULL
int main() {
	vector<int> v; // Vector defined locally
	for (int i = 0; i < 10; i++)
		v.push_back(i + 1);

	vector<int> get;

	get = v; // Copying vector v into vector get

	cout << "vector get:\n";
	for (auto it : get)
		cout << it << " ";

	int arr[10];
	for (int i = 0; i < 10; i++) // Putting Values in array
		arr[i] = i + 1;

	int copyArr[10];

	copyArr = arr; // Error

	return 0;
}
//	Output:
//		vector get:
//		1 2 3 4 5 6 7 8 9 10
//		error: invalid array assignment
//		copyArr=arr;
#endif
