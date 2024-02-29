/*

Write a C Program to print the day of the week

Enter number

1
Monday

Do you want to continue? (Y/N)
Y
Enter number
2
Tuesday

Do you want to continue (Y/N)

N

*/

#include <stdio.h>

int main()
{
    quest();
    return 0;
}

void quest()
{
    int day;
    char option;
    printf("\nEnter no:\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("Invalid no\n");
    }
    printf("\nDo you want to continue? (y/n)\n");
    scanf(" %c", &option);
    if (option == 'y' || option == 'Y')
    {
        quest();
    }
}