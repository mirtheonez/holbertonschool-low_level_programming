#include "main.h"
#include <stdio.h>
/**
 * leet - encode a string into 1337
 *
 * @c: char point
 * Return: char
 */
char *leet(char *c)
{
	int i;
	int a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int n[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == a[i])
			c[i] = n[i / 2];
	}
	return (c);
}

