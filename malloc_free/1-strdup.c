#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory
*	    which contains a copy of the string given as parameter.
* @str: string.
* Return: NULL if str=NULL, on success functions returns a pointer
*	to the duplicated string and NULL if insufficient memory.
*/
char *_strdup(char *str)
{
char *d;
int i, l = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
l++;
d = malloc(sizeof(char) * (l + 1));
if (d == NULL)
return (NULL);
for (i = 0; str[i]; i++)
d[i] = str[i];
d[l] = '\0';
return (d);
}