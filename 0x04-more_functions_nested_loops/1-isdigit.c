#include "main.h"

/**
 * _isdigit - check description
 * Description: Check for digits from 0 to 9
 * @c: input charactor
 * Return: 1 for digit and 0 for non digits
 */

int _isdigit(int c)
{
	int digit = 0, i;

	for (i = 48; i <=57; i++)
	{
		if (c == i)
		{
			digit = 1;
			break;
		}
	}
	return (digit);
}
