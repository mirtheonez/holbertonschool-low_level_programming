#include "main.h"
/**
*print_diagonal - draws diagonal line.
*@n: number of times character is printed.
*/
void print_diagonal(int n)
{
int l, i;
if (n > 0)
{
for (l = 0; l < n; l++)
{
for (i = 1; i <= l; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}