#include <stdio.h>
/**
 * main - Program that prints the alphabet
 * in lower case followed by in uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		putchar(str[i]);
	}
	return (0);
}
