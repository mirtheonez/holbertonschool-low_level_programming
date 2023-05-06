#include "main.h"
/**
 * _memset - function fills the first n of the memeory
 * area pointed to  s with constant b
 *
 * @s: string
 * @b: constant
 * @n: bytes of the memory
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

}
