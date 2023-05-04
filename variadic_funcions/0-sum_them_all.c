#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - returns sum of all its parameter.
* @n: number of parameters.
* @...: variable number of parameters.
* Return: 0 if n is 0, otherwise sum.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int i, s = 0;
va_start(nums, n);
for (i = 0; i < n; i++)
s += va_arg(nums, int);
va_end(nums);
return (s);
}