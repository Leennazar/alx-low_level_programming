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
	char *nspace;
	size_t len1, len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
	nspace = malloc(sizeof(char) * (len1 + len2 + 1));
	if (nspace == NULL)
		return (NULL);

	if (s1 != NULL && s2 != NULL)
	{
		strcpy(nspace, s1);
		strcat(nspace, s2);
	}
	else if (s1 != NULL)
	{
		strcpy(nspace, s1);
		strcat(nspace, "\0");
	}
	else if (s2 != NULL)
	{
		strcpy(nspace, s2);
		strcat(nspace, "\0");
	}
	else
	{
		return (NULL);
	}

	return (nspace);
}
