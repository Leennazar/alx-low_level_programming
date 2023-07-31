#include "lists.h"
/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: pointer to list
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t number_of_elements = 0;

	while (h)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
