#include <stdio.h>

int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
i = 0;
for (; i < 26;)
{
char ch = alphabet[i];
i++;
putchar(ch);
}
putchar('\n');
return (0);
}
