#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
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
	char *main_start = (char *)main;

	for (int i = 0; i < number_of_bytes; i++)
	{
		printf("%02hhx", main_start[i]);
	}
	printf("\n");
	return (0);
}
