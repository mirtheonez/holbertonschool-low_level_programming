#include "main.h"
/**
* _pow_recursion - returns value of x raised to the power of y.
* @x: n° to be raised.
* @y: power.
* Return: the value.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
x *= _pow_recursion(x, y - 1);
return (x);
}