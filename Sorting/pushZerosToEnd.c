/*

Important question ->

-> Array sorted in reverse order represent the worst case input for an insertion sort.

Que -> How many passes would be required during insertion sort to sort an array of 5 elements ?

Ans -> n - 1 passes = 5 - 1 = 4

No of passes means outer loop kitni baar chalega.

**************************************************************************************************************************

Que -> Given an integer array arr, move all 0's to the end of it while maintaining the relative order of the non- zero elements.

Note that you must do this in-place without making a copy of the array.

Ans ->

int arr[] = {5, 0, 2, 0, 0, 4, 1, 3, 0};   -> given an integer array arr

int arr[] = {5, 2, 4, 1, 3, 0, 0, 0, 0};   -> after sorting

------------------------------------------------------------------------------------------------------------

Dry run ->

Method 1 ->

int arr[] = {5, 0, 2, 0, 0, 4, 1, 3, 0};

int ans[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};   ->  Creating another empty array

******************************************************************************************************

Method 2 ->

int arr[] = {5, 0, 2, 0, 0, 4, 1, 3, 0};

for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - 1 - i; j++) {
        if(arr[j] == 0) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j++;
        }
    }
    return 0;
}


*/

#include <stdio.h>

int main()
{
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int n = 9;
    // int ans[9];  // Creating another empty array
    // int index = 0;
    printf("Original array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // Method 1 -> Push zeroes to end  by Creating another empty array

    // for (int i = 0; i < 9; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         ans[index] = arr[i];
    //         index++;
    //     }
    // }
    // while (index != 9)
    // {
    //     ans[index] = 0;
    //     index++;
    // }

    // Method 2 -> Push zeroes to end using bubble sort algorithm

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n");
    printf("Pushed zeros to end : \n");
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", ans[i]);
        printf("%d ", arr[i]);
    }

    return 0;
}