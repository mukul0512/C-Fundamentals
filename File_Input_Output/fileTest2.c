// Make a program to input student information from a user & enter it to a file.

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("student.txt", "w");
    char name[100];
    int age;
    float cgpa;

    printf("enter name : ");
    scanf("%s", &name);

    printf("enter age : ");
    scanf("%d", &age);

    printf("enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "\nStudent name : %s\n", name);

    fprintf(fptr, "Student age : %d\n", age);

    fprintf(fptr, "Student cgpa : %.2f\n ", cgpa);

    fclose(fptr);

    return 0;
}