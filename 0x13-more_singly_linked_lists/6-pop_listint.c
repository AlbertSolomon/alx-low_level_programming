#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head of singly linked list
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *temp2;
	int n;

	if (head == 0 || temp == 0)
		return (0);

	temp2 = temp->next;
	n = temp->n;
	free(temp);
	*head = temp2;

	return (n);
}
