#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that print the sum of two diagonals
 *					of a square matrix of integer
 *
 * @a:var
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, row, col;

	row = 0;
	col = 0;
	for (i = 0; i <= (size * size); i = i + size + 1)
		row = row + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		col = col + a[j];
	printf("%d, %d\n", row, col);
}
