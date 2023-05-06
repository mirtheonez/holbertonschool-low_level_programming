#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the string
 * @accept: var
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b;
	int i;

	b = 0;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				b++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
