#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to list
 * Return: freed list
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
