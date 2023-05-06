#include<stdio.h>
#include "3-calc.h"
#include<stdlib.h>
int (*get_op_func(char *s))(int, int);
/**
 * main - a program that performs simple operations
 * @argc: argiment count
 * @argv: argument value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);


	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);

	}
/*	if (get_op_func(argv[2]) == NULL)  */
/*	{*/
	/*	printf("Error\n");*/
	/*	exit(99);*/
/*	}*/
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
