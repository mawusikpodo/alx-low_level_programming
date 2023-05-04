#include "main.h"

/**
 * binary_to_uint - Converts binary number to an unsigned integer
 * @b: A pointer to binary string
 * Return: Converted unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b; ++b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1;
		if (*b == '1')
			result += 1;
	}
	return (result);
}
