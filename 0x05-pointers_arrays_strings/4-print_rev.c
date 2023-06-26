#include "main.h"
/**
  * print_rev -  function that prints a string, in reverse, followed by a new line.
  * @s: string to be reversed pointer
  * Return: nothing
  */

void print_rev(char *s)
{
	int i, j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	s--;
	for (i = j; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
