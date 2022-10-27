#include "main."
#include <string.h>

/**
 * string_toupper - start of program
 * @(char *): parameter
 * Return: Always 0
 */

char *string_toupper(char *)
{
	int len = strlen(*(char *));
	int i;

	for (i = 0; i < len; i++)
	{
		if (islower(*((char *)[i])))
			toupper(*((char *)[i]));
	}
}
