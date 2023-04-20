#include "variadic_functions.h"

/**
 * sum_them_all - get the sum
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (a = 0; a < n; a++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
