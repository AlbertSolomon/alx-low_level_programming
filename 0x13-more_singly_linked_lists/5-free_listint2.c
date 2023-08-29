#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free the memory of the list
 * @head: pointer to the provided list
 *
 * Return: returns void
 */
void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		listint_t *curr = *head;

		while (curr != NULL)
		{
			listint_t *temp = curr;

			curr = curr->next;
			free(temp);
		}

		*head = NULL;
	}
}
