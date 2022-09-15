#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar('0' + n);
	}
	_putchar('\n');
}
