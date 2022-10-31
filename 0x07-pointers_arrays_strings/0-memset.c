#include "main.h"
#include <string.h>

/**
 * _memset - start of program
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, sizeof (unsigned int) * n);
}
