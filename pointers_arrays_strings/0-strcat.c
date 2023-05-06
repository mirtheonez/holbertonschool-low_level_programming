#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates tow string
 * @dest: The pointer string1
 * @src: string2
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *index;

	index = dest + strlen(dest);
	while (*src != '\0')
		*index++ = *src++;
	*index = '\0';
	return (dest);

}
