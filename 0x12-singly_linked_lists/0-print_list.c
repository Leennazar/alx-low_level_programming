#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		n++;
		h = h->next;
	}
	return (n);
}
