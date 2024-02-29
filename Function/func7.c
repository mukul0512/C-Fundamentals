#include <stdio.h>

void calculatePrice(float amount);

int main()
{
    float item;
    printf("\n Enter the no of item \n");
    scanf("%f", &item);
    calculatePrice(item);
    printf("Total amount paid is: %.2f\n", item);
    return 0;
}

void calculatePrice(float amount)
{
    amount = amount + (0.18 * amount);
    printf("Total amount paid is: %.2f\n", amount);
}