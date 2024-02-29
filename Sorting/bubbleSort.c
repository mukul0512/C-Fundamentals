/*

Bubble Sort -> main principle is swap 2 numbers

int temp = a;
int a = b;
int b = temp;

Example 1.

int arr[] = {9, 1, 3, 4, 10, 5, 6};    ----> Original array

int arr[] = {1, 3, 4, 5, 6, 9, 10};    ----> after sorting the array

1. Technique -> swap 2 adjacent number by 1st Pass & 2nd Pass and so on...

2. Explanation -> swap(arr[i] > arr[i + 1]);

Conclusion -> After every pass the maximum element reaches to the end.

3. Optimization ->

4. Complexity

---------------------------------------------------------------------------------------------------------

int arr[] = {9, 1, 3, 4, 10, 5, 6};    ----> Original array

1st Pass ->

{9, 1, 3, 4, 10, 5, 6};  ----> Original array

{1, 9, 3, 4, 10, 5, 6};

{1, 3, 9, 4, 10, 5, 6};

{1, 3, 4, 9, 10, 5, 6};

{1, 3, 4, 9, 10, 5, 6};

{1, 3, 4, 9, 5, 10, 6};

{1, 3, 4, 9, 5, 6, 10};    ---> 1st Pass complete

2nd Pass ->

{1, 3, 4, 9, 5, 6, 10};

{1, 3, 4, 9, 5, 6, 10};

{1, 3, 4, 9, 5, 6, 10};

{1, 3, 4, 5, 9, 6, 10};

{1, 3, 4, 5, 6, 9, 10};  ----> after sorting the array

************************************************************************************************************************************

Example 2. Worst case scenario

int arr[] = {5, 4, 3, 2, 1};   ---> Original array

int arr[] = {1, 2, 3, 4, 5};   ---> after sorting the array

1st Pass ->

{5, 4, 3, 2, 1};   ---> Original array

{4, 5, 3, 2, 1};

{4, 3, 5, 2, 1};

{4, 3, 2, 5, 1};

{4, 3, 2, 1, 5};    ---> 1st Pass complete

2nd Pass ->

{3, 4, 2, 1, 5};

{3, 2, 4, 1, 5};

{3, 2, 1, 4, 5};    ---> 2nd Pass complete

no need to check comparision with 4 and 5 element because we done it already in 1st Pass

3rd Pass ->

{2, 3, 1, 4, 5};

{2, 1, 3, 4, 5};    ---> 3rd Pass complete

no need to check comparision with 3, 4 and 5 element because we done it already in 2nd Pass

-------------------------------------------------------------------------------------------------------

4th Pass ->

{1, 2, 3, 4, 5};    ----> after sorting the array


*****************************************************************************************************************

-> if 'n' element in the array -> 'n - 1' are the maximum passes.

-> After every pass, we need to apply bubble sort(swap 2 number) on the unsorted elements only & we do not need to check the 'largest'.


Coding implementation of bubble sort ->

Nested loops

-> Outer loop will stand for no. of passes.

-> Inner loop will do the swapping.


*********************************************************************************************************************

Time complexity -> O(n * n) -> worst case

*************************************************************************************************************

Maximum no of swaps in worst case in Bubble sort ->

worst case -> means array is given in descending order.

no of swaps = no of operation

If size of array is 'n' ->

-> n(n - 1) / 2


**************************************************************************************************************

-> How to optimize the bubble sort in the case of nearly sorted arrays?

Solution ->

Check if array after every pass is already sorted or not with the help of a checkmark?


*********************************************************************************************************************

Time complexity in best case -> After completing all the swapping flag is still true.

-> Outer loop will run only 1 time.

   0 <= i <= n - 2 -> n - 1 baar chalega.

-> Inner loop will run for 4 times.  No of operation done is 4.

i = 0 -> n - 1 baar

i = 1 -> n - 2 baar

i = 2 -> n - 3 baar

i = 3 -> n - 4 baar

i = 4 -> n - 5 baar

"   "    "     "

-> no of operations  = n - 1 + n - 2 + n - 3 + n - 4 + ........  + 2 + 1 

                     = (n - 1) * n / 2

                     = O((n * n) / 2 - n / 2 )

                     = O(n * n) / 2

                     = O(n * n)

flag = true;

TC = O(n)


******************************************************************************************************************


Time complexity in average case ->

O(n * n)


***************************************************************************************************

Time Complexity of bubble sort in all the cases are -->

1. Best case      -> O(n)

2. Average case   -> O(n * n)

3. Worst case     -> O(n * n)


*************************************************************************************************************

Space Complexity of bubble sort in all the cases are --> are constant i.e O(1)

-> Means that no exta space is used under heap memory. Or you can say to store an array.

1. Best case      -> O(1)

2. Average case   -> O(1)

3. Worst case     -> O(1)

*********************************************************************************************************************

Que -> Is Bubble Sort Stable ?

Answer is yes, iff relative order maintained after sorting the original array.

Stable Sort ??? 

Ex -> if whatever duplicate element comes first then the final sorted array duplicate element also comes first.

   just like the following example where, element 2 is comes before 2' therefore under sorted array also comes in the same order.

int arr[] = {1, 2, 5, 2', 4};  Original array


int arr[] = {1, 2, 2', 4, 5};  Stable Sort

*****************************************************************************************************************

Conclusion ->

Bubble Sort -> Unsorted array -> ascending order

*******************************************************************************************************************

*/

#include <stdio.h>
#include <stdbool.h> // for bool flag

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    printf("Unsorted array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // bubble sort
    for (int i = 0; i < n - 1; i++)                                                                   // TC -> O(n)
    {   //  Outer loop will stand for no. of passes.

        // Check if array after every pass is already sorted or not with the help of a checkmark?
        bool flag = true; // true here means array is sorted now.

        // optimize the bubble sort in the case of nearly sorted arrays by using flag
        // for (int j = 0; j < n - 1; j++) // Inner loop will do the swapping.

        for (int j = 0; j < n - 1 - i; j++) // Inner loop will do the swapping.                        // TC -> O(n)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                flag = false; // false here means array is not sorted yet.
            }
        }

        if (flag == true) // optimize the bubble sort in the case of nearly sorted arrays
        {
            break;
        }
    }
    printf("\n");
    printf("Sorted array : \n");
    for (int i = 0; i < n; i++)                                                                          // TC O(n)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}