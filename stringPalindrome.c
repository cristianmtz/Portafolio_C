#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char mystring[], int length);

int main()
{

    char mystring[] = "abccba";
    char mystring2[] = "Not a palindrome!";
    int length = strlen(mystring2);

    if (isPalindrome(mystring2, length))
    {
        printf("%s\n-is a palindrome",
               mystring2);
    }
    else
    {
        printf("%s\n-is not a palindrome",
               mystring2);
    }

    return 0;
}

bool isPalindrome(char mystring[], int length)
{
    int index;

    for (index = 0; index < (length / 2); index++)
    {
        if (mystring[index] != mystring[length - index - 1])
        {
            return false;
        }
    }
    return true;
}