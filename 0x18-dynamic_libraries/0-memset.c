#include "main.h"

/**
 * _memset - fills memory with constant bytes
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: a pointer to location
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *location = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (location);
}
