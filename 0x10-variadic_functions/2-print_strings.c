#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - start
 * @separator: parameter
 * @n: parameter
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		char *value = va_arg(arg, char *);

		if (value == NULL)
			printf("(nil)");
		else
			printf("%s", value);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg);
}
