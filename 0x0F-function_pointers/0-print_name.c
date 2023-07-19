#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>
/**
  * _print - function that prints a string
  * @x: pointer to string
  * Return: string
  */
void _print(char *x)
{
	strdup(x);
}
/**
  * print_name - function that prints a name.
  * @name: pointer to name string
  * @f: function pointer to a character string that returns nothing
  * Return: name
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
