#include "main.h"

/**
 * _isalpha - function
 * @c: input parameter
 * Description: Check if input is a letter
 * Return: 1 if uppercase and 0 if lowercase
 */

int _isalpha(int c)
{
	char l, u;
	int isletter = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
			{
				isletter = 1;
			}
		}
	}
	return (isletter);
}
