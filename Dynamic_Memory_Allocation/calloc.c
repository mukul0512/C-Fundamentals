
// wpt allocate memory of size n, where n is entered by the user

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // calloc
    int *ptr = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("number %d = %d\n", i + 1, ptr[i]);
    }
}