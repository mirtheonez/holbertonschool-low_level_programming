#include "main.h"
#include <stdio.h>
/**
 * string_toupper - change all lowercase os astring to appercase
 *
 * @c: char point
 * Return: char
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
			c[i] = c[i] - 32;
	}
	return (c);
}
