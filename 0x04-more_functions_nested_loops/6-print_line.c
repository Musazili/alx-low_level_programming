#include "main.h"
/**
 *print_line - prints straight line
 *@n: number if times to print _
 *Return: returns void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
