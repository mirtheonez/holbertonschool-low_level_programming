#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings.
* @s1: string.
* @s2: string.
* @n: number of bytes.
* Return: NULL if fail, otherwise a pointer.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *c;
unsigned int l = n, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i]; i++)
l++;
c = malloc(sizeof(char) * (l + 1));
if (c == NULL)
return (NULL);
l = 0;
for (i = 0; s1[i]; i++)
c[l++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
c[l++] = s2[i];
c[l] = '\0';
return (c);
}