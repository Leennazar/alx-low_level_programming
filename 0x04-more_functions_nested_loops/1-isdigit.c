#include "main.h"
/**
  * _isdigit -  function that checks for a digit (0 through 9).
  * @c: the character, digit or symbol being checked
  * Return: 1 if c is a digit and 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}
