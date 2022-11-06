#include <math.h>

/**
 * _sqrt_recursion - start
 * @n: parameter
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	double a = n;
	double b = sqrt(a);
	int c = (int) b;

	if (b > c)
		return (-1);
	return (c);
}
