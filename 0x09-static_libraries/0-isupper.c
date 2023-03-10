#include "main.h"

/**
 * _isupper - Check description
 * Description: Checks for uppercase letter
 * @c: input charactor
 * Return: 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	char letter;
	int isUpper = 0;

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		if (c == letter)
		{
			isUpper = 1;
			break;
		}
	}
	return (isUpper);
}
