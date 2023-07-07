#include "main.h"
#include <stdio.h>
/**
  * main - program that prints its name, followed by a new line.
  * @argc: argument count
  * @argv: array of string containing comamnd line arguments
  * Return: nothing
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
