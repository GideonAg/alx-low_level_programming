#include <stdio.h>

/**
 * main - start of program
 * Return: has a value of 0
 */
int main(void)
{
char hex_numbers[16] = "0123456789abcdef";
int i;
i = 0;
for (; i < 16;)
{
putchar(hex_numbers[i]);
i++;
}
putchar('\n');
return (0);
}
