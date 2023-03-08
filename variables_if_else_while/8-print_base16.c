#include <stdio.h>
/**
*main -Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
int i;
char c;
for (i = 48; i <= 57; i++)
putchar(i);
for (c = 97; c <= 102; c++)
putchar(c);
putchar('\n');
return (0);
}
