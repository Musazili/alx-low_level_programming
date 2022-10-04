#include <stdlib.h>
#include "main.h"
/**
 * _strdup - entry point
 * @str: pointer
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	s = malloc(sizeof(char) * (j + 1))
		if (j == NULL)
		{
			return (NULL);
		}
	for (i = 0; i < j; i++)
	{
		s[i] = str[i];
	}
	s[j] = '\0';
		return (s);
}
