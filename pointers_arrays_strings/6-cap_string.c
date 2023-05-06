#include "main.h"
#include <stdio.h>
/**
 * cap_string - change all lowercase os astring to appercase
 *
 * @c: char point
 * Return: char
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
	}
	return (c);
}
