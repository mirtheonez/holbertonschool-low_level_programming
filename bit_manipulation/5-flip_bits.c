#include "main.h"
/**
 * flip_bits - function thatreturn the numbers of bits you would need to flip
 * @n: the number
 * @m: umber
 * Return:-1 if an error
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, xor = n ^ m;

	while (xor > 0)
	{
		bits += (xor&1);
		xor >>= 1;
	}
	return (bits);
}