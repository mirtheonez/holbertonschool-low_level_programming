#include "main.h"
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of a program
 *
 * @ac: argc argument count
 * @av: argv argument value
 * Return: string concate
 */
char *argstostr(int ac, char **av)
{
	int i, j; /* incrementation to loop av*/
	char *str; /* pointeur string for the result to concat the av */
	int a; /*incrementation for the str*/
	int size = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	/*size of the argument value  */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;

	}
	size += ac;
	/* allocation memoire */
	str = malloc(size + 1);
	if (str == NULL) /* return NULL if malloc fails*/
		return (NULL);

	a = 0;
	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j]; j++)
			str[a++] = av[i][j];

		str[a++] = '\n';
	}
	str[size] = '\0';
	/*	free(str);*/
	return (str);
}
