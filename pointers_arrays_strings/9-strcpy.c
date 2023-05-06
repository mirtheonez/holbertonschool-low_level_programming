#include "main.h"

/**
 * _strcpy - copy strung pointeur
 * @dest: var
 * @src: var
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
