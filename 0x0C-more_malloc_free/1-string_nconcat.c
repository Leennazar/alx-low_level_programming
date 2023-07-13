#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: bytes from s2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = sizeof(s1);
	len2 = sizeof(s2);

	if (n >= len2)
	{
		ptr = malloc(sizeof(char) * (len1 + len2 - 1));
	}
	else
	{
		ptr = malloc(sizeof(char) * (len1 + n));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);

}
