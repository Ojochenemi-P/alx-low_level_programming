#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds new node at the beginning of linked list
 * @head: Pointer to first node in the list
 * @n: data to insert in that new node
 *
 * Return: Pointer to new node, or NULL if no success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
