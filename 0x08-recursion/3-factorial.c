#include "main.h"
/**
 * int factorial - entry point
 * @n: number
 * Return: 0
 */
int factorial(int n)
{
	for (n > 1)
		return (n * factorial(n - 1));
}
