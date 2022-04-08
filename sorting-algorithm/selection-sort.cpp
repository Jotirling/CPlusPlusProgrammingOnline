

In selection sort, the smallest value among the unsorted elements of the array is selected in every pass and inserted to its appropriate position into the array. It is also the simplest algorithm. It is an in-place comparison sorting algorithm. In this algorithm, the array is divided into two parts, first is sorted part, and another one is the unsorted part. Initially, the sorted part of the array is empty, and unsorted part is the given array. Sorted part is placed at the left, while the unsorted part is placed at the right.

In selection sort, the first smallest element is selected from the unsorted array and placed at the first position. After that second smallest element is selected and placed in the second position. The process continues until the array is entirely sorted.

The average and worst-case complexity of selection sort is O(n2), where n is the number of items. Due to this, it is not suitable for large data sets.

Selection sort is generally used when -

A small array is to be sorted
Swapping cost doesn't matter
It is compulsory to check all elements

Selection sort complexity
Now, let's see the time complexity of selection sort in best case, average case, and in worst case. We will also see the space complexity of the selection sort.

1. Time Complexity
    Case	        Time Complexity
    Best Case       O(n2)
    Average Case    O(n2)
    Worst Case      O(n2)

Best Case Complexity - 
    It occurs when there is no sorting required, i.e. the array is already sorted. The best-case time complexity of selection sort is O(n2).
Average Case Complexity - 
    It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. 
    The average case time complexity of selection sort is O(n2).
Worst Case Complexity - 
    It occurs when the array elements are required to be sorted in reverse order. 
    That means suppose you have to sort the array elements in ascending order, but its elements are in descending order. 
    The worst-case time complexity of selection sort is O(n2).

2. Space Complexity
Space Complexity    O(1)
Stable              YES

    The space complexity of selection sort is O(1). 
    It is because, in selection sort, an extra variable is required for swapping.