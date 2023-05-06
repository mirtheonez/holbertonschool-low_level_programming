#include "variadic_functions.h"
/**
 * print_strings - functions that prints strings followed by new line
 * @separator: the string to be printed between strings
 * @n: numbers of strings passed to the function
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);


		if (str == NULL)
			printf("%s", "(nil)");
		else

			printf("%s", str);

		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

