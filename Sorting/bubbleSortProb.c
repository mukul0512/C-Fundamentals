/*
given an unsorted array ->

int arr[] = {3, 2, 5, 1, 4};  ----> original array

To do -> Sort in descending order.

int arr[] = {5, 4, 3, 2, 1};  ----> descending order

***************************************************************************
1st Pass ->

{3, 2, 5, 1, 4};  ----> original array

{3, 2, 5, 1, 4};

{3, 5, 2, 1, 4};

{3, 5, 2, 1, 4};

{3, 5, 2, 4, 1};

2nd Pass ->

{5, 3, 2, 4, 1};

{5, 3, 2, 4, 1};

{5, 3, 4, 2, 1};

{5, 3, 4, 2, 1};

3rd Pass ->

{5, 3, 4, 2, 1};

{5, 4, 3, 2, 1};

****************************************************************


*/

#include <stdio.h>
#include <stdbool.h> // for bool flag

int main()
{
    int arr[5] = {3, 2, 5, 1, 4};
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
            if (arr[j] < arr[j + 1])
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