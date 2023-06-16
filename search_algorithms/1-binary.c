#include "search_algOs.h"
#include "stdio.h"
/**
 * linear_search - search value using linear search algo.
 * @array: array to search algo
 * @size: size of array
 * @value: value to be retrieve
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
