#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the integer were getting its square root
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n <= 0)
	{
		return (-1);
	}
	for (i = 0; i * i <= n; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}
	return (-1);
}
