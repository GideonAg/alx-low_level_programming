#include <stdio.h>

/**
 * main - start of program
 * Return: has value of 0
 */
int main(void)
{
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
i = 0;
for (; i < 52;)
{
char ch = alphabet[i];
i++;
putchar(ch);
}
putchar('\n');
return (0);
}
