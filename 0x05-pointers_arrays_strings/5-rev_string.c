#include "main.h"
#include <string.h>

/**
 * rev_string - start of program
 * @s: parameter
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s) - 1;
	int j = 0;

	for (int i = len; i >= 0; i--)
	{
		s[j] = s[i];
		j++;
	}
}
