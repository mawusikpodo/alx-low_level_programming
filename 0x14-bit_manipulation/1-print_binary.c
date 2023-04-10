#include "main.h"

/**
 * print_binary - Prints a binary number
 * @n: The number to be printed
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, i;

	mask = 1UL << (sizeof(n) * 8 - 1);

	for (i = 0; i < sizeof(n) * 8; i++)
	{
		if ((n & mask) == mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
