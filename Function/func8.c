#include <stdio.h>
#include <math.h> // library function

int main()
{
    int num, square;
    printf("Enter the no: \n");
    scanf("%d", &num);     // built-in function
    square = pow(num, 2);
    printf("\nThe square of a no is : \n %d", square);  // built-in function
    return 0;
}