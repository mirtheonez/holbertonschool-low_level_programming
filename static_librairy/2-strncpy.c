#include "main.h"
/**
* _strncpy - copies inputted n° of bytes from src into dest.
* @dest: destination.
* @src: source string.
* @n: number of bytes to be copied.
* Return: A pointer to dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0, l = 0;
while (src[i++])
l++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = l; i < n; i++)
dest[i] = '\0';
return (dest);
}