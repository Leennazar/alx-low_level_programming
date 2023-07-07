#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int mul = 1, i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
