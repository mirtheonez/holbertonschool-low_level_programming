#include <stdio.h>
#include <stdlib.h>
/**
* main - prints multiplication of 2 numbers.
* @argc: number of arguments.
* @argv: array of pointers.
* Return: 0 if 2 arguments, else 1.
*/
int main(int argc, char *argv[])
{
int n1, n2, mult;
if (argc != 3)
{
printf("Error\n");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
mult = n1 *n2;
printf("%d\n", mult);
return (0);
}