#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string copied
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *nstr;

	if (str == NULL)
		return (NULL);
	{
		nstr = malloc(sizeof(char) * strlen(str) + 1);
		if (nstr == NULL)
			return (NULL);
		strcpy(nstr, str);
		return (nstr);
		free(nstr);
	}

}
