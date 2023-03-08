#include <stdio.h>
/**
*main -Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
int i1, i2;
for (i1 = 0; i1 <= 98; i1++)
{
for (i2 = i1 + 1; i2 <= 99; i2++)
{
putchar((i1 / 10) + '0');
putchar((i1 % 10) + '0');
putchar(' ');
putchar((i2 / 10) + '0');
putchar((i2 % 10) + '0');
if (i1 == 98 && i2 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
