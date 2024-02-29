// Write a C Program to check whether a Person is eligible to Vote or not
/*
Enter your age:
21

Out  You are eligible

else You are not el
*/
#include <stdio.h>

int main(){
    int age;
    printf("Enter age: \n");
    scanf("%d", &age);
    if(age >= 18){
        printf("Eligible to vote\n");
    }else{
        printf("Not eligible to vote\n");
    }
    return 0;
}