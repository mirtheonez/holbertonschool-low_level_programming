#include "main.h"
#include <stdio.h>
/**
 * reverse_array - print a string in reverse
 *
 *@a: array
 *@n: size
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = 0; i < n ; i++)
	{
		n--;
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
	}
}
