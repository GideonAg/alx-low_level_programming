#include "main.h"

/**
 * 0-isupper.c - checks for upper of lower
 * @c: funtion parameter
 * Return: 1 if upper and 0 if lower
 */

int _isupper(int c)
{
	char ch;
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
