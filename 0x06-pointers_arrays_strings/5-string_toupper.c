#include "main.h"
/**
 * *string_toupper - entry point
 *
 * Return: 0
 */
char *string_toupper(char *)
{
	int i;
	char *n;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] >= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
