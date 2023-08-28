#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * add_nodeint - Adds a node at the beginning of a singly linked list
 * @head: pointer to the address of a given linked list
 * @n: constant variable provided to be added to the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *baby_node = malloc(sizeof(listint_t));

	if (baby_node == 0)
		return (0);
	baby_node->n = n;
	baby_node->next = *head;
	*head = baby_node;

	return (*head);
}
