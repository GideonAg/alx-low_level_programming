#include "main."
#include <string.h>

/**
 * string_toupper - start of program
 * @str: parameter
 * Return: Always 0
 */

char *string_toupper(char *str)
{
	int len = strlen(*str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (islower(str[i]))
			toupper(str[i]);
	}
}
