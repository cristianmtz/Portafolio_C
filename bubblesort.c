#include <stdio.h>

void bubblesort(int array[], int length);

int main()
{

    int array[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};

    int length = sizeof(array) / sizeof(array[0]);

    bubblesort(array, length);

    return 0;
}

void bubblesort(int array[], int length)
{

    int temp;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < (length - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("Array[%d] = %d\n", i, array[i]);
    }
}