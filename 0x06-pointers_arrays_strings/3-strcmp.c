#include "main.h"
/**
 * _strcmp - entry point
 * @s1: string
 * @s2: string to be compared
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	{
		putchar("strcmp(s1,s2) = d%", result);
	}
	return (0);
}
