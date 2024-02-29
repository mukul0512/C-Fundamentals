/*

Write a fuction to count the occurrence of vowels in a string.

vowels -> a. e. i, o, u

-> char str = "HelloWorld";
Output = 3 vowels

*/

#include <stdio.h>

int countVowels(char str[]);

int main()
{
    char str = "HelloWorld";
    printf("Vowels are: %d", countVowels(str));
    return 0;
}

int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }   
    return count;
}