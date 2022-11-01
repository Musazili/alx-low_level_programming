#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int j;

	i = 0;
	if (b = NULL)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
	if (b[j] != '0' && b[j] != '1')
		return (0);
	}
	for (j = 0; b[j] !='\0'; j++)
	{
		i <<= 1;
		if (b[j] == '1')
			i += 1;
	}
	return (i);
}
