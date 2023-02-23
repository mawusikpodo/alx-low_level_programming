#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - check description
 * @n: input charactor
 * Description: print diagonal line
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
