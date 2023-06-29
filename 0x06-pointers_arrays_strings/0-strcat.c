#include "main.h"
#include <stdlib.h>
/**
 * _strcat - function that concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
