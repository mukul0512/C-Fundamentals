/*
Sum of 1st n natural number

sum = sum(n-1) + n
*/

#include <stdio.h>

float sumOfNaturalNo(float num);

int main()
{
    float n;
    printf("\nThe sum is : %.2f\n", sumOfNaturalNo(5));
    return 0;
}

float sumOfNaturalNo(float num){
    if (num == 1)
    {
        return 1;
    }
    
    float sumNm1 = sumOfNaturalNo(num - 1);
    float sumN = sumNm1 + num;
    return sumN;
}