#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints opcodes for its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (Success)
 */

static int main(int argc, char *argv[])
{
	int x, bytes;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	x = 0;
	while (x < bytes)
	{
		printf("%02hhx", arr[x]);
		x++;
	}
	printf("\n");
	return (0);
}
