#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
*/
int main(void)
{
int i = '0';
char letter = 0;
for (i = '0'; i <= '9'; i++)
putchar(i);
{
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
}
putchar('\n');
return (0);
}
