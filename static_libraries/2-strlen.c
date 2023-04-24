#include "main.h"
/**
*_strlen - returns length of a string.
*@s: input
*Return: Always 0.
*/
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
s++;
i++;
}
return (i);
}
