#include <stdio.h>
#include <stdarg.h>
#include  "variadic_functions.h"

/**
 * sum_them_all - start
 * @n: parameter
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list arg;

	va_start(arg, n);

	if (n == 0)
		return (0);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(arg, int);
		return (sum);
	}
	va_end(arg);
}
