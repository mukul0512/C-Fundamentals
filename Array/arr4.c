/*

-> Array is a pointer

int *ptr = &arr[0];
                    -> Here arr = &arr[0];
int *ptr = arr;

*/

#include <stdio.h>

int main()
{
    int arr[10];
    int *ptr = &arr[0];
    int *ptr = arr;
    printf("\n%u", ptr);
    printf("\n%u", arr);
    return 0;
}