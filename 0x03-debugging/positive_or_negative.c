#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - program that prints if a random number is positive,negative,or zero
  * Return: 0 (Success)
  */
void postitive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
}
