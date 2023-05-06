#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 *
 *@str: variable returns the length of a string.
 * Return: Always 0.
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
