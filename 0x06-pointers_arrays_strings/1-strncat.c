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
	int len, i;

	len = 0;
	i = 0;
	while (*(dest + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		*(dest + len) = *(src + i);
	}
	*(dest + len) = '\0';
	return (dest);
}
