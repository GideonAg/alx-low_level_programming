#include "main.h"
#include <string.h>

/**
 * puts_half - start of program
 * @str: parameter
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i = len / 2;

	if (len % 2 == 1)
	{
		i = i + 1;
	}

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
