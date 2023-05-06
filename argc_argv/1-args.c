#include "main.h"
#include <stdio.h>
/**
 * main- program that print its name followed by new line
 *
 * @argc: argc
 * @argv: argv
 * Return: void
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
