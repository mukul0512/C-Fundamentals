/*
Quest 1  Linear search algo   Time complexity O(n), Space complexity O(n)
Write a program to search an element in the given array.
Eg:
Enter the size of the array
5
Enter the array:
5
4
8
19
43
Enter the element you want to search:
8
Element 8 is found at 3 position

*/

#include <stdio.h>

int main()
{
    int  arrSize;                          // O(1)
    printf("Enter array size: \n");
    scanf("%d", &arrSize);

    // int arr[arrSize];
    int arr[5];
    printf("Enter the value of %d integer : \n", arrSize);
    for (int i = 0; i < arrSize; i++)   // O(n)
    {
        printf("Enter element %d: ", i + 1); // O(1)
        scanf("%d", &arr[i]);
    }

    int search;
    printf("\nEnter element to search \n");
    scanf("%d", &search);

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == search)
        {
            printf("\nThe element %d is found at %d position \n", search, i + 1);
            break;
        }
    }
            return 0;
}

/*
Quest 2
Preprocessor ---  
Function in STDIO.h library
difference between keywords return vs break vs continue
other libraries like stdio.h
functions in stdio.h
*/