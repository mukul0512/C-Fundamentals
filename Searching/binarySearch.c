/*
Write a C program that implements a binary search algorithm to find the index of a target element in a sorted array.
If the target is present, print its index; otherwise, print "Element not found."

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
low = 0;
high = 9

mid = (high + low) / 2  Divide and conquer approach   Time Complexity = O(log(n)) and space complexity = O(1)
mid = 4
arr[mid] = 5
search element = 9
low = mid + 1 = 4 + 1 = 5
seach element = 2
high = mid - 1 = 4 - 1 = 3
while(low <= high)

-------------------------------------------------------------------------------------------------------

ex ->
int arr[] = {4, 11, 13, 23, 47, 98, 102}
target = 47;

Step 1 ->
low = 0;
high = 6;
mid = (low + high) / 2 = (0 + 6) / 2 = 3
arr[mid] = 23;
(arr[mid] < target)
then, low = mid + 1 = 3 + 1 = 4

Step 2 -> 
low = 4
high = 6
mid = (l + h) / 2 = (4 + 6) / 2 = 10 / 2 = 5
arr[mid] = 98
(arr[mid] > target)
then, high = mid - 1 = 5 - 1 = 4

step 3 ->
low = 4
high = 4
mid = (l + h) / 2 = (4 + 4) / 2 = 4
arr[mid] = 47
(arr[mid] == target)
then, return mid

*/

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int num;
    int arr[] = {10, 23, 34, 45, 51, 65, 72, 84, 98, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("\n Enter the element to search\n");
    scanf("%d", &num);
    int index = binarySearch(arr, 0, size - 1, num);
    if (index == -1)
    {
        printf("\nElement not found\n");
    }else
    {
        printf("\nElement %d is found at %d position\n", num, index + 1);
    }
    
    
    return 0;
}
