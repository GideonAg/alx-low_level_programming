#include "main.h"
#include <stdio.h>

/**
 * puts2 - start of program
 * @str: parameter
 * Return: void
 */

void puts2(char *str)
{
	int len = strlen(str) - 1;
	int i = 0;

	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
