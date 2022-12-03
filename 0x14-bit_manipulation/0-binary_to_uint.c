#include "main.h"

/**
 * print_binary - start
 * @n: parameter
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int a;
	int len;
	int base_two;

	if (!b)
		return (0);

	a = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '\0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			a += base_two;
	}

	return (a);
}
