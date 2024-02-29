/*

Selection Sort ->

int arr[] = {7, 4, 5, 9, 8, 2, 1};

{7, 4, 5, 9, 8, 2, 1};   --> original array

{1, 4, 5, 9, 8, 2, 7};

{1, 2, 5, 9, 8, 4, 7};

{1, 2, 4, 9, 8, 5, 7};

{1, 2, 4, 5, 8, 9, 7};

{1, 2, 4, 5, 7, 9, 8};

{1, 2, 4, 5, 7, 8, 9};   --> sorted array

*******************************************************************************

Coding implementation of selection sort ->

Worst case ->

int arr[] = {5, 4, 3, 2, 1};    --> given an unsorted array

To do -> Traverse array till obtain a sorted array in increasing order.

Dry Run ->
                                                                     0  1  2  3  4

                                                                    {5, 4, 3, 2, 1};

 // selection sort
    for (int i = 0; i < n - 1; i++)                             size of array is 5 so n = 5
    {                                   outer loop --->         i = 0 to 3 i.e (n - 1 not included) -> 0, 1, 2, 3
        int min = INT_MAX;                                      5, 4, 3, 2, 1                                                                
        int minIndex = -1;                                      0, 1, 2, 3, 4
        for (int j = i; j <= n - 1; j++)   inner loop --->      j = 0 to 4 i.e n - 1 -> 0, 1, 2, 3, 4   
        {
            if (min > arr[j])                                   
            {
                min = arr[j];                                   ex -> min = arr[1]; 
                minIndex = j;                                   ex -> min[index] = 4;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];                                  ex-> arr[4] = arr[0]
        arr[i] = temp;                                           arr[0] = 1
    }

              {5, 4, 3, 2, 1};

1st Pass  ->  {1, 4, 3, 2, 5};

2nd Pass  ->  {1, 2, 3, 4, 5};  --> even though it's sorted array but we continue till the whole array traversal is being completed.

3rd Pass  ->  {1, 2, 3, 4, 5};

4th Pass  ->  {1, 2, 3, 4, 5}; --> final sorted array


*****************************************************************************************************************

Observation ->

-> Outer loop --->    For 'n' elements we need 'n - 1' passes.

-> Inner loop --->    In each pass we find out the minimum element in the unsorted part.

-> After every pass the unsorted array reduces by 1 length.

******************************************************************************************************************

Time complexity -> In all the case time complexity will be O(n * n) because we need to traverse all the elements by swapping 
without perform a bool check.

1. Worst case -> O(n * n)

because we can count the number of operation i.e the no of passes required.

no of operation -> n + n -1 + n - 2 + ..... + 3 + 2 + 1 

                -> n(n + 1) / 2

                -> (n * n) / 2 + n / 2

                -> (n * n) / 2

                -> n * n

Time Complex    -> O(n * n)

*******************************************************************************************************

2. Average case -> O(n * n)



************************************************************************************************

3. Best case -> O(n * n)

************************************************************************************************

Que -> Is Selection Sort Stable ?

Answer is No, because relative order will not be maintained after sorting the original array.

unstable Sort ??? 

Ex -> if whatever duplicate element comes first then the final sorted array duplicate element will not comes first.

   just like the following example where, element 2 is comes before 2' 
   but after applying selection sort the duplicate elements will not comes in the same order.

int arr[] = {1, 2, 5, 2', 4};  --> Original array

int arr[] = {5, 4, 2', 2, 1};  --> after applying selection sort

Dry run ->

min swapping 
             if(min > arr[j]){           ---> 2 > 2'  false because the are equal so can't swap
                min = arr[j];
             }
            

{1, 2, 5, 2', 4};  --> original array

first pass ->

{1, 2, 5, 2', 4};

{1, 2, 4, 2', 5}; 

{1, 2', 2, 4, 5};


*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[7] = {7, 4, 5, 9, 8, 2, 1};
    int n = 7;
    printf("Unsorted array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // selection sort
    for (int i = 0; i < n - 1; i++) // TC -> O(n)
    {  //  Outer loop will stand for no. of passes. For 'n' elements we need 'n - 1' passes.
         // In each pass we find out the minimum element in the unsorted part.
        int min = INT_MAX;
        int minIndex = -1;
        for (int j = i; j <= n - 1; j++) // Inner loop will do the swapping.                TC -> O(n)
        {
            if (min > arr[j])
            {
                min = arr[j];
                minIndex = j;
            }
        }
        // swap the min and first element of unsorted part.
        // swap minIndex and i
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
    printf("Sorted array : \n");
    for (int i = 0; i < n; i++)                                           // TC O(n)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}