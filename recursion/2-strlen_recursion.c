#include "main.h"
/**
* _strlen_recursion - returns length of a string.
* @s: string.
* Return: the length.
*/
int _strlen_recursion(char *s)
{
int l = 0;
if (*s)
{
l++;
l += _strlen_recursion(s + 1);
}
return (l);
}