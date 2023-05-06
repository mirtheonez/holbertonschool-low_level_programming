#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that execute a function given
 * as parameter on each elemenet an array
 * @array: an array
 * @size: size
 * @action: function popinters
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);

}
