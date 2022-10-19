#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char put[8] = "_putchar";
int i;
i = 0;
for (; i < 8;)
{
putchar(put[i]);
i++;
}
putchar('\n');
return (0);
}
