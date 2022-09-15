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
		putchar(n % 10 + '0');
	putchar('\n');
	return (0);
}
