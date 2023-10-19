#include <stdio.h>

void fizzBuzz(int start, int end);

int main()
{

    int start = 1;
    int end = 20;

    fizzBuzz(start, end);

    return 0;
}

void fizzBuzz(int start, int end)
{

    for (int index = start; index <= end; index++)
    {

        if (((index % 3) == 0) && ((index % 5) == 0))
        {
            printf("[%d] = FizzBuzz\n", index);
        }
        else if ((index % 3) == 0)
        {
            printf("[%d] = Fizz\n", index);
        }
        else if ((index % 5) == 0)
        {
            printf("[%d] = Buzz\n", index);
        }
        else
        {

            printf("[%d] = %d\n", index, index);
        }
    }
}