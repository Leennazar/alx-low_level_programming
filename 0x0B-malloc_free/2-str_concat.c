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

	nspace = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (s2 == NULL)
		return (s1);
	else if (s1 == NULL)
		return (s2);
	else if ((s1 == NULL) && (s2 == NULL))
		return (nspace);
	strcpy(nspace, s1);
	strcat(nspace, s2);
	if (nspace == NULL)
		return (NULL);
	return (nspace);


}
