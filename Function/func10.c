/*
  *******************Practice Set for practice of function concepts ****************

-> Write a function to find sum of digits of a number?

-> Write a function to find square root of a number?

-> Write a function to print "Hot" or "Cold" depends on the temperature that user enters?

-> Make your own pow function?

*/
// ********************************************************************************************************
// -> Write a function to find sum of digits of a number?

//  n % 10 + sum_of_digit(n / 10)

// #include <stdio.h>

// int sumOfDigits(int num);

// int main()
// {
//   int n;
//   printf("\nEnter the number: \n");
//   scanf("%d", &n);
//   printf("The sum of digits in %d is %d\n", n,  sumOfDigits(n));
//   return 0;
// }

// int sumOfDigits(int num)
// {
//   if (num == 0)
//   {
//     return 0;
//   }
//     return (num % 10 + sumOfDigits(num / 10));
// }

// Write a function to find square root of a number?

// #include <stdio.h>
// #include <math.h>

// float squareRoot(float num);

// int main()
// {
//   float n;
//   printf("\nEnter the no: \n");
//   scanf("%f", &n);
//   printf("\nThe square root of %.2f is : %.2f \n", n, squareRoot(n));
//   return 0;
// }

// float squareRoot(float num){
//   return sqrt(num);
// }

// ********************************************************************************************************

// Write a function to print "Hot" or "Cold" depends on the temperature that user enters?

// f = (c * 9 / 5) + 32;

// #include <stdio.h>

// float calcTemperature(float celsius);

// int main()
// {
//   float temp;
//   printf("\nEnter the celsius temperature : \n");
//   scanf("%f", &temp);
//   if (temp <= 6)
//   {
//     printf("The temperature is cold\n");
//   }
//   else if (temp <= 4)
//   {
//     printf("Very chilled");
//   }
//   else if (temp <= 37)
//   {
//     printf("Temperature is medium\n");
//   }
//   else if (temp >= 37 && (temp <= 57))
//   {
//     printf("Temperature is average hot\n");
//   }
//   else
//   {
//     printf("Temperature is very hot\n");
//   }

//   printf("Temperature of %.2f celsius is: %.2f fahrenheit\n", temp, calcTemperature(temp));
//   // printf("Temperature is: %.2f fahrenheit\n", calcTemperature(temp));

//   return 0;
// }

// float calcTemperature(float celsius)
// {
//   float fahrenheit = (celsius * 9 / 5) + 32;
//   return fahrenheit;
// }

// ********************************************************************************************************

// Make your own pow function?

#include <stdio.h>
#include <math.h>

float powFunc(float num);

int main()
{
  float n;
  printf("\nEnter the value of n: \n");
  scanf("%f", &n);
  printf("\n %.2f to the power %.2f is: %.2f\n", n, n, powFunc(n));
  return 0;
}

float powFunc(float num)
{
  return pow(num, num);
}

// ********************************************************************************************************
