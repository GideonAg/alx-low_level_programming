#include "main.h"

/**
 * reverse_array - start of program
 * @a: parameter
 * @n: parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;

	for (i = n - 1; i > 0; i--)
	{
		a[j] = a[i];
		j++;
	}
}
