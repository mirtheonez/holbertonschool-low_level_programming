#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *
 * @a: variable a
 * @b: variable b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
