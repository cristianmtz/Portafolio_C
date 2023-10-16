#include <stdio.h>

#define TARGET 1

int binary_search(int array[], int target, int low, int high);

int main()
{

    int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    size_t size = sizeof(sorted) / sizeof(sorted[0]);

    int index = binary_search(sorted, TARGET, 0, size);

    printf("Index of target(%d): %d\n", TARGET, index);

    return 0;
}

int binary_search(int array[], int target, int low, int high)
{
    int middle = (low + high) / 2;

    if (low > high)
    {
        return -1;
    }

    if (array[middle] == target)
    {
        return middle;
    }
    else if (array[middle] > target)
    {
        return binary_search(array, target, low, middle - 1);
    }
    else
    {
        return binary_search(array, target, middle + 1, high);
    }
}
