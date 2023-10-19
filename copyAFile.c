#include <stdio.h>
#include <string.h>

#define MAX_ARGUMENTS 3

int main(int argc, char *argv[])
{

    if (argc != MAX_ARGUMENTS)
    {
        printf("Argument number error. \n");
        return 1;
    }

    FILE *file, *copy;
    char c;

    /* 'r' Searches file. If the file is opened successfully fopen( )
    loads it into memory and sets up a pointer that points to the first character in it.
    If the file cannot be opened fopen( ) returns NULL.*/
    file = fopen(argv[1], "r");

    /*Open for reading in text mode. If the file exists,
    its contents are overwritten. If the file doesn’t exist,
    a new file is created. Returns NULL, if unable to open the file.*/
    copy = fopen(argv[2], "w");

    if (file == NULL || copy == NULL)
    {
        printf("Error opening file(s). \n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF)
    {
        fputc(c, copy);
    }

    fclose(file);
    fclose(copy);

    return 0;
}