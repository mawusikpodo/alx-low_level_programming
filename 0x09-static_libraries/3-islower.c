#include "main.h"

/**
 * _islower - Function
 * @c: input parameter
 * Description: Checks for lowercase character
 * Return: 1 for lowercase and 0 for uppercase
 */

int _islower(int c)
{
	char letter;
	int lower = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			lower = 1;
		}
	}
	return (lower);
}
