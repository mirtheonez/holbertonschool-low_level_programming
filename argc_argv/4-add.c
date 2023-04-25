#include <stdio.h>
#include <stdlib.h>
/**
* main - adds positive numbers.
* @argc: number of arguments.
* @argv: array of pointers.
* Return: 0 if no number is passed, 1 if number contains symbols.
*/
int main(int argc, char *argv[])
{
int n, d, s = 0;
for (n = 1; n < argc; n++)
{
for (d = 0; argv[n][d]; d++)
{
if (argv[n][d] < '0' || argv[n][d] > '9')
{
printf("Error\n");
return (1);
}
}
s += atoi(argv[n]);
}
printf("%d\n", s);
return (0);
}