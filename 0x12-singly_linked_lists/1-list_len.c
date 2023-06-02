#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - show the number of elements of list.
 * @h: Linked list
 *
 * Return: Number of elements of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
