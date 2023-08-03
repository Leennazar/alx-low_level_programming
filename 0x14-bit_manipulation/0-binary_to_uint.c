#include "main.h"
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 0
 * if it b has a char that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, pow = 1;
	int i;
	int len;

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		x += pow * (b[i] - '0');
		pow *= 2;
	}
	return (x);
}
