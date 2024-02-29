/*
To print
Enter a number
then print the following pattern

1   
12   
123       
1234
12345

*/

#include <stdio.h>

void printArray(int n);
void printStar(int n);


void main()
{
    int n;
    printf("\nEnter a no:\n ");
    scanf("%d", &n);
    printStar(n);
}

void printArray(int n)
{
    for (int i = 0; i < n; i++) // i shows rows or line
    {
        for (int j = 0; j <= i; j++) // j shows column or item
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }
}

void printStar(int n)
{
    for (int i = 0; i < n; i++) // i shows rows or line
    {
        for (int j = 0; j <= i; j++) // j shows column or item
        {
            printf("*");
        }
        printf("\n");
    }
}