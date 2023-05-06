#include "variadic_functions.h"
/**
 * print_numbers - functions that prints numbers followed by new line
 * @separator: the string to be printed between numbers
 * @n: numbers of integers passed to the function
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
