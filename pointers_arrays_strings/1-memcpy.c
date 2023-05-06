#include "main.h"
/**
 * _memcpy - function that copie memory erea
 *
 * @dest: pointeur
 * @src: thz source
 * @n: bytes of the memory
 * Return: void
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);

}

