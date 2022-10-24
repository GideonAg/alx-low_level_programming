#include "main.h"
#include <string.h>

/**
 * _puts - start of program
 * @str: parameter
 * Return: void
 */

void _puts(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
