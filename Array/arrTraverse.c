/*

-> Traverse an array

int aadhar[10];

int *ptr = &aadhar[0];

*/

#include <stdio.h>

int main()
{
    int aadhar[5];

    // input
    int *ptr = &aadhar[0];
    for (int i = 0; i < 5; i++)
    {
        printf("\n index : ", i);
        // scanf("%d", (ptr + i));
        scanf("%d", &aadhar[i]);
    }

    // output
    for (int i = 0; i < 5; i++)
    {
        // printf("\n index : %d\n", i, *(ptr + i));
        printf("\n index : %d\n", i, aadhar[i]);
    }

    return 0;
}