// Que -> Make a program to read 5 integer from a file.

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("NewTest.txt", "r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("\nnumber = %d\n", n);
    fscanf(fptr, "%d", &n);

    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);

    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);

    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);

    printf("number = %d\n ", n);
    fscanf(fptr, "%d", &n);

    return 0;
}