/*

Initializing Structures ->

struct student s1 = {"Mukul Karnwal", 12345, 9.9};

struct student s2 = {"Peeyush Karnwal", 23456, 9.5};

struct student s3 = {0};

*/

#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = {"Mukul Karnwal", 12345, 9.9};

    printf("\nStudent name is : %s\n", s1.name);

    printf("Student roll no is : %d\n", s1.roll);

    printf("Student cgpa is : %.2f\n", s1.cgpa);

    // -----------------------------------------------------------------------------------------

    struct student s2 = {"Peeyush Karnwal", 23456, 9.5};

    printf("\nStudent name is : %s\n", s2.name);

    printf("Student roll no is : %d\n", s2.roll);

    printf("Student cgpa is : %.2f\n", s2.cgpa);

    // -----------------------------------------------------------------------------------------


    struct student s3 = {0};

    printf("\nStudent name is : %s\n", s3.name);

    printf("Student roll no is : %d\n", s3.roll);

    printf("Student cgpa is : %.2f\n ", s3.cgpa);

    return 0;
}