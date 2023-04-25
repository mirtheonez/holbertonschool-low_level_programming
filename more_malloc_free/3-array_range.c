#include "main.h"
#include <stdlib.h>
/**
* array_range - creates an array of integers.
* @min: first value of the array.
* @max: last value of the array.
* Return: NULL if fail, otherwise a pointer.
*/
int *array_range(int min, int max)
{
int *array, i, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = min++;
return (array);
}