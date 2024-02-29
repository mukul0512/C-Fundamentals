#include <stdio.h>

int main()
{
   float n1, n2, n3, avg;
   printf("Enter n1: \n");
   scanf("%f", &n1);

   printf("Enter n2: \n");
   scanf("%f", &n2);

   printf("Enter n3: \n");
   scanf("%f", &n3);

   avg = (n1 + n2 + n3) / 3;
   printf("The average of 3 no is: %.2f\n", avg);
   return 0;
}