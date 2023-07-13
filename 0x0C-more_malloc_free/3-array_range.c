#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int *arr_int;
	int i, number_of_int;

	if (min > max)

		return (NULL);

	number_of_int = (max - min) + 1;
	arr_int = malloc(sizeof(int) * number_of_int);
	if (arr_int == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr_int[i] = min;
		min++;
	}
	return (arr_int);

}
