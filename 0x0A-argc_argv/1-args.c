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

	for (i = 0; i < argc - 1; i++)
	{
		printf("argv[%d]:%s\n", i, argv[i]);
	}
	return (0);
}
