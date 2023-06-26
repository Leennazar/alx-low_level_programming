#include "main.h"
/**
  * _strlen - function that returns the length of a string.
  * @s: string pointer
  * Return: lenght of string
  */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
