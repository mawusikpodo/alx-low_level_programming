#include "main.h"

/**
 * _strlen - Check description
 * @s: Input parameter
 * Description: Returns the length of a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
