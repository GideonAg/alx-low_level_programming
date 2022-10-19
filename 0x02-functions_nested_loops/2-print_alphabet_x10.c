#include <stdio.h>

/**
 * main - start
 *
 * Return: Always 0
 */
void print_alphabet_x10(void);
int main(void)
{
print_alphabet_x10();
return (0);
}
void alphabet(void)
{
char ch;
ch = 'a';
for (; ch <= 'z';)
{
putchar(ch);
ch++;
}
putchar('\n');
}
void print_alphabet_x10(void)
{
int i;
i = 0;
for (; i < 10;)
{
alphabet();
i++;
}
}
