#include <iostream>
using namespace std;
void arrayPrint(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Value at index[" << i << "] value : ";
        cout << array[i] << " " << endl;
    }
    cout << endl;
}

int main()
{
    // dynamic array creation
    unsigned int sizeold = 5;
    cout << "Enter old arraySize: ";
    cin >> sizeold;
    int *arrayold = new int(sizeold);

    // assign value to array
    for (int i = 0; i < sizeold; i++)
    {
        cin >> arrayold[i];
    }
    arrayPrint(arrayold, sizeold);

    arrayPrint(arrayold, sizeold);

    // dynamic array resize creation

    unsigned int sizenew = 10;
    cout << "Enter new arraySize: ";
    cin >> sizenew;
    int *arraynew = new int(sizenew);
    arraynew = new int(sizenew);

    // copy old items into newArray
    for (int i = 0; i < sizeold; i++)
    {
        arraynew[i] = arrayold[i];
    }
    arrayPrint(arraynew, sizeold);

    // free OR delete old array
    delete[] arrayold;

    // assign remaining value to new array
    for (int i = sizeold; i < sizenew; i++)
    {
        cout << sizenew << "Enter index[" << i << "]value : ";
        cin >> arraynew[i];
        arrayPrint(arraynew, i);
    }
    arrayPrint(arraynew, sizenew);
}