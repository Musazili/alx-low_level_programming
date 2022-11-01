#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j = 0;

	if (b[j] == '\0')
		return (0);

	while ((b[j] == '0') || (b[j] == '1'))
	{
		i <<= 1;
		i += b[j] - '0';
		j++;
	}
	return (i);
}
