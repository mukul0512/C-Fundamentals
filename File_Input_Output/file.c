/*

File IO ->

File -> container in a storage device to store data.

-> RAM is volatile. (Data lost after power is off)

-> Contents are lost when program terminates.

-> Files are used to persist the data.

----------------------------------------------------------------------------------------------------------

Operation on Files

-> Create a File

-> Open a File ->

FILE *fptr;

fptr = fopen("filename", mode);

ex ->
fptr = fopen("hello.txt", "r");  // r = read
fptr = fopen("test.c", "w");    // w = write

-> Close a File ->

fclose(fptr);

-> Read from a File ->

char ch;

fscanf(fptr, "%c", &ch);

-> Write in a File ->

char ch = 'H';

fprintf(fptr, "%c", ch);

------------------------------------------------------------------------------------------------------------

Types of Files

Text Files                                   Binary Files
     |                                            |
textual data                                binary data

.txt, .c                                  .exe, .mp3, .jpg


-----------------------------------------------------------------------------------------------------------------------

File Pointer

FILE is a (hidden) structure that needs to be created for opening a file.

-> A file ptr that points to this structure & is used to access the file.

FILE *fptr;

-------------------------------------------------------------------------------------------------------------------------------

File Opening Modes ->

"r" -> open to read

"rb" -> open to read in binary

"w" -> open to write

"wb" -> open to write in binary

"a" -> open to append

------------------------------------------------------------------------------------------------------------------------------

Best Practice

Check if a file exits before reading from it.


------------------------------------------------------------------------------------------------------------------------

Read and Write a char

fgetc(fptr);

fputc('A', fptr);

-------------------------------------------------------------------------------------------------------------------

EOF (End of File) ->

fgetc returns EOF to show that the file has ended.

*/

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    // fptr = fopen("test.txt", "w");
    // fptr = fopen("test.txt", "a");
    // fptr = fopen("NewTest.txt", "r");
    // fptr = fopen("NewTest.txt", "w");
    // if (fptr == NULL)
    // {
    //     printf("\nFile doesn't exist\n ");
    // }
    // else
    // {
    //     fclose(fptr);
    // }

    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("\nCharacter = %c\n ", ch);

    // -------------------------------------------------------------------------------------

    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'U');
    // fprintf(fptr, "%c", 'K');
    // fprintf(fptr, "%c", 'U');
    // fprintf(fptr, "%c", 'L');

    //-------------------------------------------------------------------------------------

    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n ", fgetc(fptr));

    // -----------------------------------------------------------------------------------------------------

    // fputc('P', fptr);
    // fputc('E', fptr);
    // fputc('E', fptr);
    // fputc('Y', fptr);
    // fputc('U', fptr);
    // fputc('S', fptr);
    // fputc('H', fptr);

    // ------------------------------------------------------------------------------------------------------

    char ch;
    ch = fgetc(fptr);

    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);

    return 0;
}