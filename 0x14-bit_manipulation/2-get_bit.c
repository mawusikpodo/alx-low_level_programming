#include "main.h"

/**
 * get_bit - gets a bit at index
 * @n: number to get bit from
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	bit = n >> index;
	bit = bit & 1;
	return ((int) bit);
}
