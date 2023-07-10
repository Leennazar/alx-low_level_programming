#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: Second string
 * Return: new space that contains s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, s1);
	strcat(new_str, s2);

	return (new_str);
}
