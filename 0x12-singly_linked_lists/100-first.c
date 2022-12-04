#include <stdio.h>

void __artribute__(constructor) print(void);

/**
 * print - prints a string first befor the main
 * function is executed
 */

void print(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
