#include "main.h"
/**
 * set_bit - sets a bit at given index to 1
 * @n: number to set bit
 * @index: index to set bit
 * Return: 1 if it worked, or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
