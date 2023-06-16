#include <stdio.h>
/**
 * main - A pogram that prints all possible combinations
 *  of single-digit numbers.
 *  Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		if (i != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
