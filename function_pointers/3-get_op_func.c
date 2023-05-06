#include "3-calc.h"
/**
 * get_op_func- function
 * @s: the aargument
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;


	while (strcmp(s, ops[i].op) != 0)
		i++;
	return (ops[i].f);

}

