#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
* struct printer - struct type defining a printer.
* @symbol: represents data type.
* @print: function pointer to a func that prints corresponding data type.
*/
typedef struct printer
{
char *symbol;
void (*print)(va_list arg);
} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif