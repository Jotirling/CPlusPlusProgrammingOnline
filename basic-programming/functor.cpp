//  Functor in C++.

//     Functor is also knows as partialy applied function

//     Consider a function1(int ) that takes only one argument.
//     However, while calling function1(int ) we have a lot more information that
//     We would like to pass to that, but we cannot as it accepts only one parameter.
//     What can be done?

//     Functors are objects that can be treated as they are a function or
//     function pointer.
//     Functors are most commonly used along with STLs in a scenario like following:

// A C++ program uses transform() in STL to add
// 1 to all elements of arr[]

#include <iostream>
#include <algorithm>
using namespace std;

#ifndef NULL
int increment(int x)
{
    return (x + 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Apply increment to all elements of
    // arr[] and store the modified elements
    // back in arr[]
    transform(arr, arr + n, arr, increment);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
#endif

// What is functor :
// Awswer : It work as function, and achieved by overloading "operator ()" in some class.

class Multiply
{
    int value;

public:
    Multiply(int val)
    {
        value = val;
    }
    int operator()(int multi_val)
    {
        return value * multi_val; // we are multiplying with multi_val to existing value of the class data memeber.
    }
};

int main()
{
    Multiply mul(12);
    cout << mul(2) << endl;
    cout << mul(3) << endl;

    return 0;
}