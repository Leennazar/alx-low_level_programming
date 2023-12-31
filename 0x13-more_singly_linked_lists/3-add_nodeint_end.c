#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: pointer to pointer to linked list
 * @n: new number
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
