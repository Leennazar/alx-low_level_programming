#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - program that prints opcodes for its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int b;
	char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");
	return (0);
}
