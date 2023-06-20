#include "main.h"
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
