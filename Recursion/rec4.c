/*

-> wpt convert celsius to fahrenheit

Algo ->  Approach
    f = (c * 9 / 5) + 32;

*/

#include <stdio.h>

float convertTemp(float celsius);

int main()
{
    printf("\nThe temperature in fahrenheit is : \n %.2f", convertTemp(37));
    return 0;
}

float convertTemp(float celsius)
{
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}