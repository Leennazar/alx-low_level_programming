#include "main.h"
/**
  * swap_int -  function that swaps the values of two integers.
  * @a: first integer value
  * @b: second integer value
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
