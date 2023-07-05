#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the integer were getting its square root
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (other_sqrt_recursion(n, 0));
}
/**
  * other_sqrt_recursion - find the natural square rootr
  *
  * @n: number to calculate square root
  * @j: iterator
  * Return: resulting square root
  */

int other_sqrt_recursion(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	else
	{
		return (other_sqrt_recursion(n, j + 1));
	}
}
