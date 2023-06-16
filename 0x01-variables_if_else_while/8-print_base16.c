#include <stdio.h>
/**
 * main - Program that prints all the numbers of base
 * 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	for (i = 0; i <= 255; i++)
	{
		putchar(i < 10 ? i + '0' : i - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
