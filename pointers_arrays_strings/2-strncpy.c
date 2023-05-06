#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strncpy - function that copies a string
 *
 * @dest: string1
 * @src: string2
 * @n: size
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *index;

	index = dest;

	if (dest == NULL)
	{
		return (NULL);
	}

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (index);
}
