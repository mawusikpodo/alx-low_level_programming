#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: input
 * @src: input
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *aux = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (aux);
}
