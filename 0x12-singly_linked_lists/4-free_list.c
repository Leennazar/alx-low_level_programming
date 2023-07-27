#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer to list
 * Return: nothing
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		list_t *next = head->next;

		free(head->str);
		free(head);
		head = next;
	}
}
