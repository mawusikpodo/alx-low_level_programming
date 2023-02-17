#include <stdio.h>

/**
 * main-entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		putchar(lower_case);
	putchar('\n');
	return (0);
}
