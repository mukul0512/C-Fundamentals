/*

-> Write a function to calculate Percentage of a student from marks in Science, Math, Sanskrit

*/

#include <stdio.h>

float calcPercentage(float science, float math, float sanskrit);

int main()
{
    float science = 98;
    float math = 97;
    float sanskrit = 99;
    printf("\n The percentage is : \n %.2f", calcPercentage(science, math, sanskrit));
    return 0;
}

float calcPercentage(float science, float math, float sanskrit){
    return (science + math + sanskrit) / 3;
}