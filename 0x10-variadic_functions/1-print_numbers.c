#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: pointer to the string to be printed between numbers
 * @n: number of integers to be passed to the function
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int x;

	if (separator == NULL)
		separator = "";
	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(p, int);
		if (i == n - 1)
			separator = "";
		printf("%d%s", x, separator);
	}
	va_end(p);
	printf("\n");
}
