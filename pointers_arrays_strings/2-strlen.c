#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 *
 *@s: variable returns the length of a string.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
