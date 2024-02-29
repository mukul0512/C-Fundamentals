/*

-> Write a function to count the number of odd numbers in an array?

*/

int countOdd(int arr[], int n);

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("The number of odd numbers are: %d\n ", countOdd(arr, 6));
    return 0;
}

int countOdd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0) // odd
        {
            count++;
        }
    }
    return count;
}