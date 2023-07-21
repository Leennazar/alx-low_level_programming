#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s, *separator = "";

	va_start(args, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						printf("(nil)");
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
