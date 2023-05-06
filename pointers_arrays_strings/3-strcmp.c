#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two string
 *
 * @s1: string1
 * @s2: string2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
