#include <stdio.h>
#include <string.h>

int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0; i < strlen(alphabet); i++)
{
char ch = alphabet[i];
putchar(ch);
}
putchar('\n');
return (0);
}
