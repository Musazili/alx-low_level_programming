#include "main.h"
/**
 * _puts - entry point
 * @str: string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
	return (0);
}
