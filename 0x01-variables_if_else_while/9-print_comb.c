#include <stdio.h>

/**
 * main - start of program
 * Return: has a value of 0
 */
int main(void)
{
int i;
int end;
i = 48;
end = 58;
for (; i < end;)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
