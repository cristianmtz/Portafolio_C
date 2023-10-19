/*Append text to a file already exist */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LINE 1024

int main()
{

    FILE *file;
    char buffer[MAX_LINE];

    file = fopen("file.txt", "a"); // "a" Opens a file for reading and appending.

    if (file == NULL)
    {
        printf("Error opening file\n"); //  return 1 typically means that the program is signaling an error or abnormal termination
        return 1;
    }

    printf("Enter 'quit' to exit.\n");

    do
    {
        fgets(buffer, MAX_LINE, stdin);
        if (strcmp(buffer, "quit\n") == 0)
        {
            break;
        }
        fputs(buffer, file);

    } while (true);

    fclose(file);

    return 0;
}