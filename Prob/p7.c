#include <stdio.h>

float convertTemp(float celsius);

int main()
{
    float celsius;
    printf("Enter the value in celsius: \n");
    scanf("%f", &celsius);

    float far = convertTemp(celsius);
    printf("far: %.2f\n", far);
    return 0;
}

float convertTemp(float celsius){
    float far = celsius * (float)9 / 5 + 32;
    return far;
}