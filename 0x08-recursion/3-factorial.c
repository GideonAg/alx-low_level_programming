#include "main.h"

/**
 * factorial - start
 * @n: parameter
 * Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		reutrn (1);
	return (n * factorial(n - 1));
}
