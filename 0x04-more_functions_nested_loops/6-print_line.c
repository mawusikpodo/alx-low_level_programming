#include "main.h"

/**
 * print_line - check description
 * @n: input charactor
 * Description: prints out a straight line
 */

void print_line(int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
