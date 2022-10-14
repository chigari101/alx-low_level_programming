#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters to calculate the sum of.
 * @...: ellipsis a variable number of parameter to calculate the sum of.
 *
 * Return: 0 If n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbs;
	unsigned int i, sum = 0;

	va_start(numbs, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbs, int);

	va_end(numbs);

	return (sum);
}
