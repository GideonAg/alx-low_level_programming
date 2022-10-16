#include <stdio.h>
#include <string.h>

/**
 * main - start of program
 * Return: has a value of 0
 */
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
i = 0;
for (; i < 26;)
{
char ch = alphabet[i];
if (i == 4 || i == 16)
{
}
else
{
putchar(ch);
}
i++;
}
putchar('\n');
return (0);
}
