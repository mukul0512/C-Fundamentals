/*

Enter address (house no, block, city, state) of 5 people.

DryRun ->

    typedef struct address {  ------>  struct address addresses[5];
    int houseNo;                         (array of structures)
    int block;
    char city[100];
    char state[100];
}add;

*/

#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main()
{
    struct address add[5];
    // input
    printf("\nEnter address for person 1 :\n");
    scanf("%d", &add[0].houseNo);
    scanf("%d", &add[0].block);
    scanf("%s", add[0].city);
    scanf("%s", add[0].state);

    // --------------------------------------------------------------------

    printf("Enter address for person 2 :\n");
    scanf("%d", &add[1].houseNo);
    scanf("%d", &add[1].block);
    scanf("%s", add[1].city);
    scanf("%s", add[1].state);

    // --------------------------------------------------------------------

    printf("Enter address for person 3 :\n");
    scanf("%d", &add[2].houseNo);
    scanf("%d", &add[2].block);
    scanf("%s", add[2].city);
    scanf("%s", add[2].state);

    // --------------------------------------------------------------------

    printf("Enter address for person 4 :\n");
    scanf("%d", &add[3].houseNo);
    scanf("%d", &add[3].block);
    scanf("%s", add[3].city);
    scanf("%s", add[3].state);

    // --------------------------------------------------------------------

    printf("Enter address for person 5 :\n");
    scanf("%d", &add[4].houseNo);
    scanf("%d", &add[4].block);
    scanf("%s", add[4].city);
    scanf("%s", add[4].state);

    printAdd(add[0]);

    printAdd(add[1]);

    printAdd(add[2]);

    printAdd(add[3]);

    printAdd(add[4]);

    return 0;
}

void printAdd(struct address add)
{
    printf("\nThe address of student 1 is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);

    printf("\nThe address of student 2 is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);

    printf("\nThe address of student 3 is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);

    printf("\nThe address of student 4 is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);

    printf("\nThe address of student 5 is : %d, %d, %s, %s\n ", add.houseNo, add.block, add.city, add.state);
}