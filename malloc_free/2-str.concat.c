
#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates two strings.
* @s1: string
* @s2: string
* Return: NULL if fail, else a pointer to newly allocated memory space.
*/

char *str_concat(char *s1, char *s2)
{
char *concat;
int i, c = 0, l = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] || s2[i]; i++)
l++;
concat = malloc(sizeof(char) * l);
if (concat == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
concat[c++] = s1[i];
return (concat);
}