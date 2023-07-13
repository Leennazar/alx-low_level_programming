#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements of an array
 * @size: bytes of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = (nmemb * size);
	arr = malloc(b);
	if (arr == NULL)
		return (NULL);
	memset(arr, '0', sizeof(b));
	return (arr);
	free(arr);
}
