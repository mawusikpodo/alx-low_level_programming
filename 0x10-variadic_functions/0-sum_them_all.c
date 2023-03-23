#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: Number of parameters
 * @...: Other parameters
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);
	for (; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}

