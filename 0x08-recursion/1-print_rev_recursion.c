#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - start
 * @s: parameter
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s) - 1;
	int i;

	for (i = len; i >= 0; i--)
		_putchar(s[i]);
}
