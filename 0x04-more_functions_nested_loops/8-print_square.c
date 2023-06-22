#include "main.h"
/**
  * print_square - function that prints a square
  * @size: the size of the square
  * Return: nothing
  */

void print_square(int size)
{
	int x, s;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (s = 0; s < size; s++)
		{
			_putchar(32);

			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
