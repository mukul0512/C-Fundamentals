/*

Array of Structure -> 

struct student ECE[100];  // data type(Struct student), variable name(ECE), size[100]

struct student COE[100];

struct student IT[100];

Access ->

IT[0].roll = 200;

IT[0].cgpa = 7.6; 

*/

#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};


int main()
{
    struct student ece[100];
    ece[0].roll = 1664;
    ece[0].cgpa = 9.5;
    strcpy(ece[0].name, "Mukul Karnwal");
    
    printf("name is : %s\n", ece[0].name);

    return 0;
}