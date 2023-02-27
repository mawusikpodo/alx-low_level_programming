#include "main.h"

/**
 * swap_int - Check description
 * @a: Input parameter
 * @b: Input parameter
 * Description: Swaps the values of two integers
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
