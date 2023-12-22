#include "search_algo.h"
/**
* binary_search - searchs for value in an array
* @array: pointer to the first element
* @size: number of elements
* @value: number to search with
* Return: location of value
*/
int binary_search(int *array, size_t size, int value)
{
    int x;
    int left = 0;
    int right = size - 1;
    int middle;

    if (array == NULL)
        return (-1);
    while (left <= right)
    {
        printf("Searching in array: ");
        for (x = left; x <= right; x++)
        {
            if (x != right)
                printf("%i, ", array[x]);
            else
                printf("%i\n", array[x]);
        }

        middle = left + (right - left) / 2;

        if (array[middle] == value)
            return (middle);
        else if (array[middle] < value)
            left = middle + 1;
        else
            right = middle - 1;
    }
    return (-1);
}