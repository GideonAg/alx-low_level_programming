#include "function_pointers.h"

/**
 * int_index - searches for an integer in an integer array
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to function executed on array elements
 * Return: returns (-1) if element not found, else index of element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
					return (i);
			}
		}
	}
	return (-1);
}
