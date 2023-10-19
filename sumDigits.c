#include <stdio.h>

int sum_digits(int num);

int main()
{
    int num = 0;
    int result = 0;

    printf("Enter a number: \n");
    scanf("%d", &num);

    result = sum_digits(num);

    printf("Result: %d", result);

    return 0;
}

int sum_digits(int num)
{

    int digit = 0;
    int sum = 0;

    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    return sum;
}