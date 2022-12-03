#include "main.h"

/**
 * clear_bit - start
 * @n: parameter
 * @index: parameter
 * Return: 1, else -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
