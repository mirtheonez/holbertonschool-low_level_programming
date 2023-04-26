#include "main.h"
/**
* _strncat - concatenates two strings using inputted n° of bytes from src.
*@dest: destination.
*@src: source.
*@n: number of bytes.
*Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, l = 0;
while (dest[i++])
l++;
for (i = 0; src[i] && i < n; i++)
dest[l] = src[i];
return (dest);
}