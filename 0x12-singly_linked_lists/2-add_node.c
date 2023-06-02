#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds  new node at the beginning of a list
 * @head: Original linked list
 * @str: string to add to the node
 *
 * Return: Address of new list or NULL if no success
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
