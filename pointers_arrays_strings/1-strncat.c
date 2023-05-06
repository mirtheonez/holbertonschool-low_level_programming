#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates tow string
 * @dest: The pointer string1
 * @src: string2
 * @n: size
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *index;

	index = dest + strlen(dest);
	while (*src != '\0' && n--)
		*index++ = *src++;
	*index = '\0';
	return (dest);

}

