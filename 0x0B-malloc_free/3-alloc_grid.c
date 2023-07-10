#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
