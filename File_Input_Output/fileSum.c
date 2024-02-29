/* 

2 numbers - a & b, are written in a file. 
wpt replace them with their sum.

*/

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Sum.txt", "r");

    int a;
    fscanf(fptr, "%d", &a);

    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("Sum.txt", "w");

    fprintf(fptr, "%d\n ", a + b);

    fclose(fptr);


    return 0;
}