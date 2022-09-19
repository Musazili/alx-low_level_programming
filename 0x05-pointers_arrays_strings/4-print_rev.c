#include "main.h"
/**
 * print_rev - entry point
 * @s: string to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; j = length - 1, i < length; i++, j--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
