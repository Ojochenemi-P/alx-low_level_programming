#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Calculates sum of all data in listint_t list
 * @head: First node in linked list
 *
 * Return: Resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

