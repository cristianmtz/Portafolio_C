#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool remove_character(char *string, int length, int position);

int main(void)
{

    char string[] = "12345-12345";
    int position = 5;

    bool result = remove_character(string, strlen(string), position);

    if (result)
    {
        printf("Char removed from string\n");
        printf("%s", string);
    }
    else
    {
        printf("Char not removed from string\n");
    }

    return 0;
}

bool remove_character(char *string, int length, int position)
{

    if (position < length)
    {

        for (int index = position; index < length; index++)
        {
            string[index] = string[index + 1];
        }
    }
    else
    {
        return false;
    }

    return true;
}
