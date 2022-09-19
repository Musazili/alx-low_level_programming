#include "main.h:"
/**
 * puts2 - entry point
 * @str: string to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
}
