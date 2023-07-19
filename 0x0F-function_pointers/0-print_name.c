#include "function_pointers.h"
#include <stdlib.h>
/**
  * print_name - function that prints a name.
  * @name: pointer to name string
  * @f: function pointer to a character string that returns nothing
  * Return: name
  */

void print_name(char *name, void (*f)(char *))
{
	f = f;
	f(name);
}
