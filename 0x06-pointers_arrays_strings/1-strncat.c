#include "main.h"
#include <string.h>

/**
 * _strncat - start of program
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
