#include "main.h"
/**
* _memcpy - copies @n bytes from memory area to another.
* @dest: memory area to copy @src into.
* @src: source buffer to copy characters from.
* @n: number of bytes to be copied.
* Return: a pointer to the destination.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
