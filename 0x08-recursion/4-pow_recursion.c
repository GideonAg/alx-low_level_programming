#include "main.h"
#include <math.h>

/**
 * _pow_recursion - start
 * @x: parameter
 * @y: parametr
 * Return: Aways 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (pow((double) x,(double) y));
}
