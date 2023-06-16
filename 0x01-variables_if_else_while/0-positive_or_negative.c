#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - program that prints if a random number is positive,negative,or zero
  * Return: 0 (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d\n is positive", n);
	}
	if (n == 0)
	{
		printf("%d\n is zero", n);
	}
	if (n < 0)
	{
		printf("%d\n is negative", n);
	}
	return (0);
}
