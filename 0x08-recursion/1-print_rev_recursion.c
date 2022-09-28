#include "main.h"
/**
 * _print_rev_recursion - entry point
 * @s: string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s);
	_putchar('\n');
}
