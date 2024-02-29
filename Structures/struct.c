/*

Structures -> a collection of values of different data types.

ex -> int, char, float, string

For a student store the following:

name (String)
roll no (Integer)
cgpa (Float)

Syntax ->

struct student {                                         struct student s1;
    char name[100];             -->                      s1.name = "Mukul";
    int roll;                   -->                      s1.roll = 12345678;
    float cgpa;                 -->                      s1.cgpa = 7.5;

};                              -->  statement terminator i.e ;

in-built data type -> int, float, char, arrays

user defined data types -> Struct

*/

#include <stdio.h>
#include <string.h> // to access s1.name

// User defined data type
struct student
{                       // data type
    int roll;           // properties
    float cgpa;         // properties
    char name[100];     // properties
};

int main()
{
    struct student s1;      // declared a variable
    s1.roll = 220240600; // dot operator to access properties of the data types.    i.e s1.roll
    s1.cgpa = 7.5;          // dot operator to access properties of the data types.     i.e s1.cgpa
    // s1.name = "Mukul Karnwal";
    strcpy(s1.name, "Mukul Karnwal"); // to copy string

    printf("Student roll : %d\n", s1.roll);
    printf("Student cgpa : %.2f\n", s1.cgpa);
    printf("Student name : %s\n", s1.name);
    return 0;
}