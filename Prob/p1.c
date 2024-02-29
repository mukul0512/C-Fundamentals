#include <stdio.h>

int main()
{
    float area, side;
    printf("Enter the value of side of square: \n");
    scanf("%f", &side);

    area = side * side;
    printf("The area of square is: \n%.2f", area);
    return 0;
}