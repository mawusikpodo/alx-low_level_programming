#include "main.h"

/**
 * get_endianness - determine endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	uint32_t i = 1;

	if ((i & 0xFF) == 1)
		return 1;
	else
		return 0;
}
