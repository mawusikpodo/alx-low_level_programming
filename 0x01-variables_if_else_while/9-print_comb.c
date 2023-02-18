#include <stdio.h>

/**
 * main - Posible combination of all single digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		};
	};
	putchar('\n');
	return (0);
}
