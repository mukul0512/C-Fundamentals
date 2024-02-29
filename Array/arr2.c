/*

-> wpt enter price of 3 items & print their final cost with gst?

*/

#include <stdio.h>

int main()
{
    // float price[3];
    // float price[3] = {100.00, 200.00, 300.0};
    float price[] = {100.00, 200.00, 300.0};
    float gst = 0.18;

    printf("Enter price of 1st item ");
    scanf("%f", &price[0]);

    printf("Enter price of 2st item ");
    scanf("%f", &price[1]);

    printf("Enter price of 3st item ");
    scanf("%f", &price[2]);

    printf("Final cost will be: item1 = %.2f, item2 = %.2f, item3 = %.2f ", price[0] + (0.18 * price[0]), price[1] + (0.18 * price[1]), price[2] + (0.18 * price[2]));


    return 0;
}