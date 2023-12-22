#include "search_algos.h"
/**
* linear_search - searchs array for value
* @array: pointer to element
* @size: number of elements in the array
* @value: number thats being searched for
* Return: 0 on success, -1 if failure
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%u] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
}