#include "lists.h"
#include <stdlib.h>
/**
  * list_len - function that returns the number
  * of elements in a linked list_t list.
  * @h: pointer to the list
  * Return: number of elements in a linked list
  */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

