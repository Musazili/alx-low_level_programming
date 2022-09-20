#include "main.h"
/**
 * rev_string - entry point
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char c;

	while (str[b++])
		b++;

	for (b = l - 1; b >= l / 2; b--)
	{
		c = str[b];
		str[b] = str[a - b - 1];
		str[a - b - 1] = c;
	}
}
