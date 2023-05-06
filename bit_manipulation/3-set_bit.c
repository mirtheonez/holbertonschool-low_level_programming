#include "main.h"
/**
 * set_bit - function that set the value of a bit  at given index
 * @n: the number
 * @index: index
 * Return:-1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n ^= (1 << index);

	return (1);
}