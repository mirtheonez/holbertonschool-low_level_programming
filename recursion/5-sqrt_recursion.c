#include "main.h"
/**
* find - finds natural square root of inputted number.
* @r: number.
* @i: root.
* Return: square root.
*/
int find(int r, int i)
{
if ((i * i) == r)
return (i);
if (i == r / 2)
return (-1);
return (find(r, i + 1));
}
/**
* _sqrt_recursion - returns natural square root.
* @n: number.
* Return: natural square root of n.
*/
int _sqrt_recursion(int n)
{
int i = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find(n, i));
}