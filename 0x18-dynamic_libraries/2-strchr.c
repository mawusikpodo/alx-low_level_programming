#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: an input string to search in
 * @c: an input character to locate into string s
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
