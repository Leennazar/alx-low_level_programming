#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: memory size
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		if (b > INT_MAX)
			exit(98);
		else
			exit(98);
	}
	return (ptr);
}
