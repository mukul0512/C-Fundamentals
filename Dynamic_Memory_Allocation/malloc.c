
// wpt allocate memory to store 5 prices. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // malloc
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("number %d = %d\n", i + 1, ptr[i]);
    }
}