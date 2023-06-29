#include "main.h"
/**
  * _strncat -  function that concatenates two strings.
  * @dest: string 1
  * @src: string 2
  * @n: number of bytes used from src
  * Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);
}
