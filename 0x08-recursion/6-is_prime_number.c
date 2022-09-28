#include "main.h"
/**
 * is_prime_number - entry point
 * @n: number
 * Return: 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_prime_number(n, i));
}
