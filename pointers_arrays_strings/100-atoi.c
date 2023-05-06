#include "main.h"
/**
 * _atoi - function
 * @s: char
 * Return: int
 */
int _atoi(char *s)
{
	int number = 0, i, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = number * 10 + s[i] - '0';
		}
	}
	return (number * sign);
}
