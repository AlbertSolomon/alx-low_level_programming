#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: pointer to the head of the singly linked list
 * @n: number to be added to the node of the list
 *
 * Return: the new node added at the last of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	*baby_node = malloc(sizeof(listint_t));

	if (baby_node == 0)
		return (NULL);

	baby_node->next = NULL;
	baby_node->n = n;

	if (temp == NULL)
	{
		*head = baby_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = baby_node;
	}

	return (temp);
}
