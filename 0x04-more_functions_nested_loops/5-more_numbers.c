#include "main.h"
/**
 * more_numbers - entry point
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
			_putchar(j);
		_putchar('\n');
	}
}
