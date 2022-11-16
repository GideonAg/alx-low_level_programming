#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - get required function based on operation
 * @s: operation
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i])
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
