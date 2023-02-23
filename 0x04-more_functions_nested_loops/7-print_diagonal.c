#include "main.h"

/**
 * print_diagonal - check description
 * @n: input charactor
 * Description: print diagonal line
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
