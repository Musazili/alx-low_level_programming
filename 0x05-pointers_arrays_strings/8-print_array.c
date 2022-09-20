#include <stdio.h>
#include "main.h"
/**
 * print_array - entry point
 * @n: number of element
 * @a: integer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; s < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
