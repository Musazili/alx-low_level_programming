#include "main.h"
/**
 * _sqrt_recursion - entry point
 * @n: square number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0.0)
		return (-1);
	else if (n == 0)
		return (_sqrt_recursion(n + 1));
}
