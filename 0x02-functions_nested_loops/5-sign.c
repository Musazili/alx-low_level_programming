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
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('/');
return (-1);
}
else
{
_putchar(0);
return (0);
}
}
