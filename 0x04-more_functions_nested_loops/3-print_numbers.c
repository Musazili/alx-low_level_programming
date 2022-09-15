#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');
	_putchar('\n');
	return (0);
}
