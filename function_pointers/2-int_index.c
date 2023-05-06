#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for a integer
 * @array: an array
 * @size: size
 * @cmp: function popinters
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (index = 0; index < size; index++)
		if (cmp(array[index]) != 0)
			return (index);
	return (-1);

}

