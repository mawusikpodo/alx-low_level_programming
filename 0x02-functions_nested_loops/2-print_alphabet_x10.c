#include "main.h"

/**
 * print_alphabet_x10 - function
 * Description: Prints alphabets ten times
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
