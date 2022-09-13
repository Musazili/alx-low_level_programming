#include "main.h"
/**
 * print_last_digit - entry point
 * @n: integer to be computed
 * Return:  value of the last digit
*/
int print_last_digit(int n)
{
int lastDigit = n % 10;
_putchar("last digit = %d", lastDigit);
return (0);
}
