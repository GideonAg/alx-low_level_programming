#include "main.h"

/**
 * main - start program
 * Return: value 0
 */
void print_alphabet(void)
{
char ch;
ch = 'a';
for (; ch <= 'z';)
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
