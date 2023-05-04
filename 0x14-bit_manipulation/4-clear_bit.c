#include "main.h"
/**
 * clear_bit - sets a bit to 0 at given index
 * @n: number to set bit
 * @index: index to set bit
 * Return: 1 on success, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
