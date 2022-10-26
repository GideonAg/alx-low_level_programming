#include "main.h"

/**
 * reverse_array - start of program
 * @a: parameter
 * @n: parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	char *b = NULL;
	int i;
	int j = 0;

	for (i = n - 1; i > 0; i--)
	{
		b[j] = a[i];
		j++;
	}

	*a = *b;
}
