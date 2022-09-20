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

	while (s[b] != 0)
		b++;
	b--;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}
}
