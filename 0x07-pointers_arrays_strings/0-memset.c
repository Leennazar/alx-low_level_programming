#include "main.h"
/**
  * _memset - function that fills memory with a constant byte.
  * @s: pointer to memory area
  * @b: the constant byte/value
  * @n: the number of bytes to be filled
  * Return: pointer to s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (*s != 0)
	{
		for (i = 0; i < n; i++)
		{
			*s = b;
		}
	}
	return (s);
}
