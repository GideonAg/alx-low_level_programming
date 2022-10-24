#include "main.h"
#include <string.h>

/**
 * print_rev - start of program
 * @s: parameter
 * Return: void
 */

void print_rev(char *s)
{
	int len = strlen(s) - 1;
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
