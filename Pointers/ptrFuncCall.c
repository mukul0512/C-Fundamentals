/*
 Call by value & Call by reference


 Stack overflow  : 
 ex -> when the size of data type is exced to its memory size. 
    -> Input 66666666 gives the negative integer value when performing the square of a number. 
*/

#include <stdio.h>

void square(int n, int sqr);
void _square(int *num, int *sqr);

int main()
{
    int num = 0;
    int sqr = 0;

    printf("\nNumber is : %d\n", num);
    printf("\nSquare is : %d\n", sqr);
    square(num, sqr); // Call by value

    _square(&num, &sqr); // Call by reference
    printf("\nNumber is : %d\n", num);
    printf("\nSquare is : %d\n", sqr);
    return 0;
}
// Function for Call by value
void square(int n, int sqr)
{
    printf("\nEnter the number\n");
    scanf("%d", &n);
    sqr = n * n;
    printf("\nSquare of %d is : %d\n", n, sqr);
}
// Function for Call by reference
void _square(int *num, int *sqr)
{
    printf("\nEnter the number\n");
    scanf("%d", &(*num));
    printf("Entered value is %d\n", *num);
    *sqr = (*num) * (*num);
    printf("\nSquare of %d is : %d\n", *num, *sqr);
}
