#include "main.h"
/**
 * print_last_digit - entry point
 * @n: integer to be computed
 * Return:  value of the last digit
*/
int print_last_digit(int n)
{
int lastDigit = n % 10;
if (lastDigit < 0)
lastDigit *= -1;
_putchar(lastDigit + '0');
return (lastDigit);
}
