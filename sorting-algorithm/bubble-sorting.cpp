
// Bubble sort works on the repeatedly swapping of adjacent elements until they are not in the intended order.
// It is called bubble sort because the movement of array elements is just like the movement of air bubbles in the water.
// Bubbles in water rise up to the surface; similarly, the array elements in bubble sort move to the end in each iteration.

// Although it is simple to use, it is primarily used as an educational tool because the performance of bubble sort is poor in the real world.
// It is not suitable for large data sets. The average and worst-case complexity of Bubble sort is O(n2), where n is a number of items.

// Bubble short is majorly used where -

//  1. complexity does not matter
//  2. simple and shortcode is preferred

//      Best Case Complexity -
//         It occurs when there is no sorting required, i.e. the array is already sorted.
//         The best-case time    complexity of bubble sort is O(n).
//      Average Case Complexity -
//         It occurs when the array elements are in jumbled order that is not properly ascending and
//         not properly descending.
//         The average case time complexity of bubble sort is O(n2).
//      Worst Case Complexity -
//         It occurs when the array elements are required to be sorted in reverse order.
//         That means suppose you have to sort the array elements in ascending order,
//         but its elements are in descending order.
//         The worst-case time complexity of bubble sort is O(n2).

//      Case	        Time Complexity
//
//      Best Case	    O(n)
//      Average Case	O(n2)
//      Worst Case	    O(n2)

//      Space           Complexity
//      Space           Complexity O(1)
//      Stable          YES

//      1. The space complexity of bubble sort is O(1).
//            It is because, in bubble sort, an extra variable is required for swapping.
//       2. The space complexity of optimized bubble sort is O(2).
//          It is because two extra variables are required in optimized bubble sort.

// Optimized Bubble sort Algorithm :
//      1. In the bubble sort algorithm, comparisons are made even when the array is already sorted.
//          Because of that, the execution time increases.

//      2. To solve it, we can use an extra variable swapped. It is set to true if swapping requires; otherwise, it is set to false.

//      It will be helpful, as suppose after an iteration, if there is no swapping required, the value of variable swapped will be false.
//      It means that the elements are already sorted, and no further iterations are required.
//      This method will reduce the execution time and also optimizes the bubble sort.

#include <iostream>
using namespace std;
int pass;

void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int array[], int size)
{
    int i, j, temp;
    cout << "without  optimization" << endl;
    for (i = 0; i < size - 1; i++)
    {
        cout << "pass:" << ++pass << " Result : ";
        print(array, size);

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void bubbleSortOptimised(int array[], int size)
{
    int i, j;
    bool flag = false;
    cout << "with optimization" << endl;
    for (i = 0; i < size - 1; i++)
    {

        flag = false;
        cout << "pass:" << ++pass << " Result : ";
        print(array, size);

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                flag = true;
            }
        }
        if (flag == 0) // new optimization
            break;
    }
}

int main()
{
    int array[] = {5, 1, 4, 2, 3}; // {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    bubbleSortOptimised(array, size);
    pass = 0;
    bubbleSort(array, size);

    return 0;
}