#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character used
 * Return: charcter pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	{
		arr = malloc(sizeof(int) * size);
		memset(arr, c, size);
		if (arr != NULL)
			return (arr);
		return (NULL);

	}
}
