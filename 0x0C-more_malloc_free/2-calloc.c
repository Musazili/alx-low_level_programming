#include <stdlib.h>
#include "main.h"
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: number
 * @size: bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);
	if (b != NULL)
		return (NULL);
	{
		for (i = 0; i < (nmemb * size); i++)
			b[i] = 0;
		return (b);
	}
}
