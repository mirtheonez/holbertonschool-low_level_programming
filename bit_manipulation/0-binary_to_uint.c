#include "main.h"
/**
 * binary_to_uint - function that convert a binary number to unsigned int
 * @b: the number to convert
 * Return: convert numbr
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, mult = 1;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		sum += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (sum);
}
/**
 * binary- to decimal
 * 10101/2 --> 21/10
 * 1    0   1   0   1
 * 2^4 2^3 2^2 2^1 2^0
 * 16 + 0 + 4 + 0 +	1
 * =21
 */
