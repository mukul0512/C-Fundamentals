/*

typedef Keyword -> used to create alias for data types

Keyword ex -> case, int, float, switch, break, continue, typedef

alias -> means nick or alternative name. 

ex ->

typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
}ces;

ces student1;

*/

#include <stdio.h>
#include <string.h>

// user defined

typedef struct ComputerEngineeringStudent{
    int roll;
    float cgpa;
    char name[100];
}ces;

int main()
{
    ces s1;
    s1.roll = 16645;
    s1.cgpa = 10;
    strcpy(s1.name, "Mukul Karnwal");

    printf("\nStudent roll no is : %d\n", s1.roll);

    printf("Student cgpa is : %.2f\n", s1.cgpa);

    printf("Student name is : %s\n ", s1.name);
    
    return 0;
}