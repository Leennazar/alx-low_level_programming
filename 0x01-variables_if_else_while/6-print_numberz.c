#include <stdio.h>
/**
 * main - program that prints all single digit numbers
 * of base 10 starting from 0 using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char *str  = "0123456789\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
	return (0);
}
