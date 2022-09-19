#include "main.h"
/**
 * rev_string - entry point
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int a, b;
	int c = 0;

	for (b = 0; s[b] != 0; b++)
	for (a = 0; a < b / 2; a++)
	{
		c = s[a];
		s[a] = s[b - 1 - 1];
		s[b - 1 - 1] = c;
	}
	for (a = 0; a < b; a++)
}
