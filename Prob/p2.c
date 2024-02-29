#include <stdio.h>

int main()
{
    float pi = 3.14, area, r;
    printf("Enter the radius of circle \n");
    scanf("%f", &r);
    area = pi * r * r;
    printf("The area of a circle is: \n%.2f", area);
    return 0;
}