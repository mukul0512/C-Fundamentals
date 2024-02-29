/*

-> Ask the user to enter their firstName & print it back to them.
Also try this with their fullName.

Note ->

scanf() cannot input multi-word strings with spaces.

Here, gets() & puts() come into picture.

-> String functions

    gets(str)      ---->     Dangerous & Outdated
 input a string
(even multi-word)
Note --> but currently gets(str) is not being used because it's Dangerous & Outdated function,
due to which various software are to be hacked and it doesn't track the maximum size of str.

-->
    puts(str)
Output a string

-->

fgets(str, n, file)   -->  replace file with stdin        ---->              stdin (standard input)
stops when n-1 char input or
new line is entered


ex ->

char str[100];
gets(str); --> input
puts(str); --> output

*/

#include <stdio.h>

int main()
{
    char str[100];
    // gets(str); // for getting input but not generally used
    fgets(str, 100, stdin);  // for getting inputs currently used
    puts(str);

    return 0;
}