#include <stdio.h>

/**
 * main - start of program
 * Return: has value of 0
 */
int main(void)
{
int i;
i = 48;
int end;
end = 58;
for (; i < end;)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
