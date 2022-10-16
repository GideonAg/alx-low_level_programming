#include <stdio.h>

/**
 * main - start of program
 * Return: has a vlue of 0
 */
int main(void)
{
char alphabet[26] = "zyxwvutsrqponmlkjihgfedcba";
int i;
i = 0;
for (; i < 26;)
{
putchar(alphabet[i]);
i++;
}
putchar('\n');
return (0);
}
