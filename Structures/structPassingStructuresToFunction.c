/*

Passing Structures To Function ->

Function Prototype

void printInfo(struct student s1);  // struct student is similar to like int a


*/

#include <stdio.h>
#include <string.h>

// user defined
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main()
{ 
    struct student s1 = {12345, 9.9, "Mukul Karnwal"};
    printInfo(s1);

    // s1.roll = 16610;  // call by value 

    // call by reference
    printf("\nStudent roll no is : %d\n ", s1.roll);
    return 0;
}

void printInfo(struct student s1)
{
    // Using Pointers to Structures

    struct student *ptr = &s1;

    printf("\nStudent Information is :");

    printf("\nStudent roll no is : %d\n", s1.roll);

    printf("Student cgpa is : %.2f\n", s1.cgpa);

    printf("Student name is : %s\n ", s1.name);
 
    // call by reference
    
    s1.roll = 16610;
}