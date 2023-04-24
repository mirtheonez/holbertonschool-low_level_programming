#include "main.h"
/**
* factorial - returns factorial of a given number.
* @n: given number.
* Return: factorial of n.
*/
int factorial(int n)
{
if (n < 0)
return (-1);
/* error*/
else if (n >= 0 && n <= 1)
return (1);
n *= factorial(n - 1);
return (n);
}