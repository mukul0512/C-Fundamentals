#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter character digit: \n");
    scanf("%c", &ch);
    if(isdigit(ch)){
        printf("The character is a digit\n");
    }else{
        printf("The character is not a digit\n");
    }
    return 0;
}