#include "main.h"
/**
  * _memcpy - function that copies memory area.
  * @dest: destination to be pasted at
  * @src: source of copy of  memory area
  * @n: number of bytes to be copied to dest memory area
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
