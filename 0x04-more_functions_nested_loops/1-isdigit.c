#include "main.h"

/**
 * _isdigit(int c) - start
 * @c: parameter
 * Return: 1 if is a digit or 0 if not
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
