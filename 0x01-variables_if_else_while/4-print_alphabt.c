#include <stdio.h>
/**
 * main - A program that prints the alphabet in lower case
 * expect the letters q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char *str = "abcdfghijklmnoprstuvwxyz\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	return (0);
}
