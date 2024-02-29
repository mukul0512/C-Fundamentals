/*

Structures in Memory -> structures are stored in contiguous memory location.

struct student{
    char name[100];
    int roll;
    float cgpa;
}

-> wpt store the data of 3 students.

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

    printf("\nStudent roll : %d\n", s1.roll);
    printf("Student cgpa : %.2f\n", s1.cgpa);
    printf("Student name : %s\n", s1.name);


    struct student s2;      // declared a variable
    s2.roll = 250251600; // dot operator to access properties of the data types.    i.e s2.roll
    s2.cgpa = 9.5;          // dot operator to access properties of the data types.     i.e s2.cgpa
    // s2.name = "Peeyush Karnwal";
    strcpy(s2.name, "Peeyush Karnwal"); // to copy string

    printf("\nStudent roll : %d\n", s2.roll);
    printf("Student cgpa : %.2f\n", s2.cgpa);
    printf("Student name : %s\n", s2.name);


    struct student s3;      // declared a variable
    s3.roll = 350351200; // dot operator to access properties of the data types.    i.e s3.roll
    s3.cgpa = 9.9;          // dot operator to access properties of the data types.     i.e s3.cgpa
    // s3.name = "Pulkit Aggarwal";
    strcpy(s3.name, "Pulkit Aggarwal"); // to copy string

    printf("\nStudent roll : %d\n", s3.roll);
    printf("Student cgpa : %.2f\n", s3.cgpa);
    printf("Student name : %s\n", s3.name);

    struct student s4;
    s4.roll = 4408325;
    s4.cgpa = 10;
    strcpy(s4.name, "Mohmd Salman");

    printf("\nStudent roll : %d\n", s4.roll);
    printf("Student cgpa : %.2f\n", s4.cgpa);
    printf("Student name : %s\n ", s4.name);

    return 0;
}