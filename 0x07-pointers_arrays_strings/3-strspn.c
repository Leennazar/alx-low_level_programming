#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: the pointer to the string
 * @accept: the bytes that are taken
 * Return: number of bytes both in s and accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	while (*s != '\0')
	{
		char *acc = accept;

		while (*acc != '\0')
		{
			if (*s == *acc)
			{
				c++;
				break;
			}
			acc++;
		}
		if (*acc == '\0')
		{
			break;
		}
		s++;
	}
	return (c);

}
