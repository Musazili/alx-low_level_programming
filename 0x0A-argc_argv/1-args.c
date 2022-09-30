#include <stdio.h>
/**
 * main - entry point
 * @argc: count
 * @argv: number
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d", argc);
	for (i = 0; i < argc - 1; i++)
	{
		printf("%s\n", *argv[i]);
	}
	return (0);
}
