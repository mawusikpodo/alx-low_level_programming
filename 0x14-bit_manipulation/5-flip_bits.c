#include "main.h"

/**
 * flip_bits - gets number of bits  needed to be flipped
 * @n: input parameter
 * @m: input parameter
 * Return:  number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int flip;

	xor = n ^ m;
	flip = 0;
	while (xor > 0)
	{
		if ((xor & 1) != 0)
			flip++;
		xor = xor >> 1;
	}
	return (flip);
}
