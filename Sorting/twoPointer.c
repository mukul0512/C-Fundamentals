/*

*2-pointers algorithm -> doesn't means pointer concept but here means 2 variables

Que -> Given an array of integers numbers that is already sorted in non-decreasing order,
find two numbers such that they add up to a specific target number.

-> What is sorting ?

meaning -> put in ascending order.


 ---------------------------------------------------------------------------
 // Not a good way to solve
given,

int target = 8;

int arr[] = {1, 2, 3, 4, 5, 8, 9, 10};

for(int i = 0; i < n - 1; i++) {
    for(int j = i + 1; j < n; j++) {
        if(arr[i] + arr[j] == target) {
            printf("Element found\n");
        }
    }
}
----------------------------------------------------------------------
-> Time complexity - O(n)
Efficient code 

int arr[] = {1, 2, 3, 4, 5, 8, 9, 10};
int target = 8;
int i = 0;
int j = n - 1;

while(i < j) {
if(arr[i] + arr[j] == target) {
    printf("Element found\n");
    break;
    }
if(arr[i] + arr[j] > target) {
    j--;
    }
if(arr[i] + arr[j] < target) {
    i++; // to increase the sum
    }
}

*/

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 9, 10};
    int target = 8;
    int i = 0;
    int n;
    int j = n - 1;
   
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            printf("Element found\n");
            break;
        }
        if (arr[i] + arr[j] > target)
        {
            j--;
        }
        if (arr[i] + arr[j] < target)
        {
            i++; // to increase the sum
        }
    }
    return 0;
}