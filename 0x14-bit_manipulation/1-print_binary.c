#include "main.h"

/**
 * print_binary - prints the binary representation
 * @n: the number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int print_flag = 0;
	unsigned long mask, i;

	mask = 1UL << (sizeof(n) * 8 - 1);

	for (i = 0; i < sizeof(n) * 8; i++)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			print_flag = 1;
		}
		else if (print_flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!print_flag)
	{
		_putchar('0');
	}
}
