#include "main.h"
/**
 * puts2 - entry point
 * @str: string to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
		{
			if (i % 2 == 0)
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
}
