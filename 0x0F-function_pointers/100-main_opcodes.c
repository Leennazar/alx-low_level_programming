#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcode
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *arr;

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
	arr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", arr[i]);
	}
	printf("\n");
	return (0);
}
