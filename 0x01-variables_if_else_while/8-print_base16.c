#include <stdio.h>

/**
 * main - Prints out hexadecimal numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char h;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (h = 'a'; h < 'g'; h++)
		putchar(h);
	putchar('\n');
	return (0);
}
