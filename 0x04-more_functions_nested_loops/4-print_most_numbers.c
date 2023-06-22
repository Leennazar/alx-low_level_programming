#include "main.h"
/**
  * print_most_numbers - function that prints the numbers, from 0 to 9
  * excluding numbers 2 and 4
  * Return: nothing
  */

void print_most_numbers(void)
{
	char a;

	for (a = 48; a < 58; a++)
	{
		if ((a == 50) || (a == 52))
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
