#include "main.h"
#include <string.h>

/**
 * _strncpy - start of program
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
