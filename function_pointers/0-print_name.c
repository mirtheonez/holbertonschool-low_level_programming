#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that print name
 * @name: name to print
 * @f: function pointeurs
 * Return: void
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
