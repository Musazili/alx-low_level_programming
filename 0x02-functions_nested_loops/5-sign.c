#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @n: number
 * Return: + if n>0, - if n<0 and 0 otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+', 1);
}
if (n < 0)
{
return (-1);
_putchar('-', '/');
}
else
{
return (0);
_putchar(0, 0);
}
}
