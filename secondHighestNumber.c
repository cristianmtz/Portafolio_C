#include <stdio.h>

//////////////////////Functions////////////////////////////////////////////////////
int find_second_highest(int array[], int length);

int main()
{

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int result = 0;

    result = find_second_highest(array, 9);

    printf("Result: %i", result);

    return 0;
}

int find_second_highest(int array[], int length)
{

    int max1;
    int max2;

    if (array[0] > array[1])
    {

        max1 = array[0];
        max2 = array[1];
    }
    else
    {
        max1 = array[1];
        max2 = array[0];
    }

    for (int i = 2; i < length; i++)
    {
        if (array[i] > max1)
        {
            max2 = max1;
            max1 = array[i];
        }
        else if (array[i] > max2 && array[i] < max1)
        {
            max2 = array[i];
        }
    }
    return max2;
}
