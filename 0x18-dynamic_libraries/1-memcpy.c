#include "main.h"

/**
 * _memcpy - copys memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 * Return: pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *location = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (location);
}