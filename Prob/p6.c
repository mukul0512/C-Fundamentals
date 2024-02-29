#include <stdio.h>

float fact(float n);

int main()
{
    float num;
    printf("Enter the value of factorial: \n");
    scanf("%f", &num);

    printf("Factorial is: %.2f\n", fact(num));
    return 0;
}

float fact(float n){
    if(n == 0){
    return 1;
    }
    float factNm1 = fact(n-1);
    float factN = factNm1 * n;
    return factN;
}
