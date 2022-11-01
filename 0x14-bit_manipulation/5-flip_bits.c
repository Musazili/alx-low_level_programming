#include "main.h"
/**
 * flip_bits - number of bits you would need to flip to get from one number
 * @n: number
 * @m: numberwe flip n to
 * Return: The number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int j = 0;

	i = n ^ m;

	while (i)
	{
		j++;
		i &= (i - 1);
	}
	return (j);
}
