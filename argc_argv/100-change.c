#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main- program that print its name followed by new line
 *
 * @argc: argc
 * @argv: argv
 * Return: void
 */
int main(int argc, char **argv)
{
	int a, b, i;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		putchar('0');
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			b = a / c[i];
			a = b * c[i];
		}
	}
	printf("%d\n", a);
	return (0);
}
