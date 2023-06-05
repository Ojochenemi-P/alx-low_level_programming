#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns number of elements in linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: Number of a nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
