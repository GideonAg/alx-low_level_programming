#include <math.h>

/**
 * _pow_recursion - start
 * @x: parameter
 * @y: parameter
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return pow(x, y);
}
