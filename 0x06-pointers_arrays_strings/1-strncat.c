#include "main.h"
/**
 **_strncat - entry point
 * @dest: destionation
 * @src: string to be concastinated
 * @n: size
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + 1] = src[i];
	}
	dest[dest[len] + 1] = '\0';
	return (dest);
}
