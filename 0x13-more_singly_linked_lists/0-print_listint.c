#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
