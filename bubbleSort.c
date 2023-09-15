/*Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
 This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.*/

#include <stdio.h>

void bubble_sort(int *array, int length);

int main()
{
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int length = sizeof(array) / sizeof(array[0]);

    bubble_sort(array, length);

    return 0;
}

void bubble_sort(int *array, int length)
{

    int temp = 0;

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
        printf("array[%d] = %d\n", i, array[i]);
    }
}
