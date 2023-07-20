#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *string;

	if (separator == NULL)
		separator = "";
	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(p, char *);
		if (string == NULL)
			string = "(nil)";
		if (i == n - 1)
			separator = "";
		printf("%s%s", string, separator);
	}
	va_end(p);
	printf("\n");
}
