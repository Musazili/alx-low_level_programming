#include <stdio.h>
#include "main.h"
/**
 * print_array - entry point
 * @n: number of element
 * @*a: integer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d, ", a[s]);
	}
	printf("\n");
}
