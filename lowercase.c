#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SPACE 32

void make_lower(char *string, int length);

void make_lower_using_ASCII(char *string, int length);

int main(void)
{

    char string[] = "StrinG With LotS OF CaPitals";

    // make_lower(string, strlen(string));

    make_lower_using_ASCII(string, strlen(string));

    printf("%s", string);

    return 0;
}

void make_lower(char *string, int length) // This is the easiest way to do using "Tolower()" included in #ctype.h
{

    for (int index = 0; index < length; index++)
    {
        string[index] = tolower(string[index]);
    }
}

void make_lower_using_ASCII(char *string, int length) // Using ASCII
{

    char nonwords[] = " .,;\n\t";

    for (int index = 0; index < length; index++)
    {
        if (strchr(nonwords, string[index]) != NULL)
        {
            continue;
        }
        else
        {
            if (string[index] >= 65 && string[index] <= 90)
            {
                string[index] = string[index] + 32;
            }
        }
    }
}
