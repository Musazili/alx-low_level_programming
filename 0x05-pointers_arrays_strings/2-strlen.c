#include "main.h"
/**
 * _strlen - entry point
 * @s: the length
 * Return: 0
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n])
		n++;

	return (n);
}
