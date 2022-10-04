#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: input width
 * @height: input height
 * Return: double pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	array = (int **) malloc(height * sizeof(int *));

	if (array == 0)
	{
		while (i--)
			free(array[i]);
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	if (array != NULL)
	{
		return (array);
	}
	return (NULL);
}
