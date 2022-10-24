#include "main.h"

/**
 * swap_int - start of program
 * @a: parameter
 * @b: parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int **pA = &b;
	*b = *a;
	*a = **pA;
}
