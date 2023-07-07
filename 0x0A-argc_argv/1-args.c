#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num_args = argc - 1;

	(void) argv;/* ignore argv */
	printf("%d\n", num_args);
	return (0);
}
