#include "main.h"
/**
 * main - A program that prints _putchar, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char PC[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(PC[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
