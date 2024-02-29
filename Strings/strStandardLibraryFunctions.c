/*

Standard library functions  ex -> math.h ---> pow(n, m)--> n^m

        <string.h>

1 strlen(str) -> count number of characters excluding '\0'

-------------------------------------------------------------------------------------------------------------------

2 strcpy(newStr, oldStr) -> copies value of old string to new string.

ex ->
char str1[] = "Hello"; // new string
char str2[] = "World"; // old string

strcpy(str1, str2);

Output -> World
Hello will be changed by World i.e second string will be copy in the first string.

-----------------------------------------------------------------------------------------------------------------------------------------------

3 strcat(firstStr, secStr) -> concatenates first string with second string.

char firstStr = "Hello"; // We can store the value in firstStr only when the (length of firstStr + length of secondStr) >= size of first string
char secondStr = "World";

strcat(firstStr, secStr);

output -> HelloWorld

-------------------------------------------------------------------------------------------------------------------------------------------

4 strcmp(firstStr, secStr) -> Compares 2 strings & returns a value

0 -> string equal

positive -> first > second (ASCII)
negative -> first < second (ASCII)

*/

#include <stdio.h>
#include <string.h>

int main()
{
    // 1 strlen(str) -> count number of characters excluding '\0'

    // char name[] = "Mukul";
    // int length = strlen(name); // type casting ino integer.
    // printf("length is : %lu", strlen(name)); // strlen(str) return %lu format specifier it doesn't return an integer value.

    // printf("length is : %d\n", length); // but we can convert it into integer by type cast it into integer.

    // -------------------------------------------------------------------------------------------------------------------------------------

    // 2 strcpy(newStr, oldStr) -> copies value of old string to new string.

    // char oldStr[] = "oldStr";
    // char newStr[] = "newStr";

    // strcpy(newStr, oldStr);

    // puts(newStr);

    // --------------------------------------------------------------------------------------------------------------------------------------------

    // 3 strcat(firstStr, secStr) -> concatenates first string with second string.

    // Ex -> 1

    // char firstStr = "Hello";
    // char secondStr = "World";

    // strcat(firstStr, secondStr);

    // -----------------------------------------------------------------------------------------------------------------------------------

    // Ex -> 2

    // char firstStr[100] = "Hello ";
    // // char firstStr[] = "Hello "; // program crashed
    // char secondStr[] = "World";

    // strcat(firstStr, secondStr);
    // puts(firstStr);

    // ---------------------------------------------------------------------------------------------------------------------------------------

    // 4 strcmp(firstStr, secStr) -> Compares 2 strings & returns a value

    // Ex -> 1

    // char firstStr[] = "Apple";
    // char secondStr[] = "Banana";

    // printf("%d", strcmp(firstStr, secondStr)); // Prints -1  because A - B = -1
    // printf("%d", strcmp(secondStr, firstStr)); // Prints 1 because B - A = 1

    // ------------------------------------------------------------------------------------------------------------------------------------------

    // Ex -> 2

    // char firstStr[] = "HHHA";
    // char secondStr[] = "HHHB";

    // printf("%d\n", strcmp(firstStr, secondStr)); // Prints -1  because A - B = -1
    // printf("%d", strcmp(secondStr, firstStr)); // Prints 1 because B - A = 1

    // ---------------------------------------------------------------------------------------------------------------------------------------

     // Ex -> 3

    // char firstStr[] = "HHH";
    // char secondStr[] = "HHH";

    // printf("%d\n", strcmp(firstStr, secondStr)); // Prints 0  because H - H = 0
    // printf("%d", strcmp(secondStr, firstStr)); // Prints 0 because H - H = 0

    return 0;
}