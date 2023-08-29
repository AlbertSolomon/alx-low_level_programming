#include <stdlib.h>
#include "lists.h"

/**
*free_listint - function that deallocates a singly linked list
*@head: the pointer to a linked list
*
*Return: function returns void
*/
void free_listint(listint_t *head)
{
	if (head == 0)
		return;
	free_listint(head->next);
	free(head);
}
