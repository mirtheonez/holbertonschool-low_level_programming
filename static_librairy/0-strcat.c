#include "main.h"
/**
*_strcat - concatenates string pointed to by @src to the end of
*	the string pointed to by @dest
*@dest: pointer to the string to be concatenated
*@src: source string to be appended
*Return: a pointer to the destination string
*/
char *_strcat(char *dest, char *src)
{
int i = 0, n = 0;
while (dest[i++])
n++;
for (i = 0; src[i]; i++)
dest[n++] = src[i];
return (dest);
}