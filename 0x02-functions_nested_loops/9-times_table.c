#include "main.h"
/**
 * times_table - print a times table
 *
 * Return: returns void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
