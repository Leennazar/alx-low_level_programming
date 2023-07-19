#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - prints its own opcode
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, x;
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
	while (x < bytes - 1)
	{
		printf("%02hhx", arr[x]);
		x++;
	}
	printf("%02hhx\n", arr[x]);
	return (0);
}
