#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - calculates the sum of a singly linked list
 * @head:  pointer to the linked list provided
 *
 * Return: The sum of elements in a linked list
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);

	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
