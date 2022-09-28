#include "main.h"
/**
 * _sqrt_recursion - entry point
 * @n: square number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square root
 * @n: numer
 * @i: iterator
 * Return: number
 */
int _sqrt(int n, int i)
{
	int j = i * i;

	if (j > n)
		return (-1);
	if (j == n)
		return (i);
		return (_sqrt(n + 1));
}
