/*

Arrow Operator ->

(*ptr).code <-------> ptr->code

*/

#include <stdio.h>

// user defined data type
struct student
{
    int roll;
    float cgpa;
    char name[100];
};


int main()
{
        // Using Initializing Structures
        struct student s1 = {12345, 9.5, "Mukul Karnwal"};

        printf("\nStudent roll no is : %d\n", s1.roll);

        printf("Student cgpa is : %.2f\n", s1.cgpa);

        printf("Student name is : %s\n", s1.name);

        // --------------------------------------------------------------------------------------

        // Using Pointers to Structures
        struct student *ptr = &s1;

        printf("\nStudent roll no is : %d\n", (*ptr).roll);

        printf("Student cgpa is : %.2f\n", (*ptr).cgpa);

        printf("Student name is : %s\n ", (*ptr).name);

        // ---------------------------------------------------------------------------------------------

        // Using Arrow Operator

        printf("\nStudent roll no is : %d\n", ptr->roll);

        printf("Student cgpa is : %.2f\n", ptr->cgpa);

        printf("Student name is : %s\n ", ptr->name);

    return 0;
}