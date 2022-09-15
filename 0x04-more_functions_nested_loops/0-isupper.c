#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: letter to be checked
 * Return: always 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
