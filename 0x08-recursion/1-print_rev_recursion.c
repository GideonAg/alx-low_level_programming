#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - start
 * @s: parameter
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	strrev(s);
	puts(s);
}
