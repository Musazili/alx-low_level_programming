#include "main.h"
/**
 * swap_int -  entry point
 * @a: integer
 * @b: integer to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
		*a = *b;
		*b = c;
}
