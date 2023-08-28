#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * listint_len - prints the length of the singly linked list
 * @h: pointer to the head of a provided singly linked list
 *
 * Return: The length of the provided singly linked list of type unsigned int
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	if (h == NULL)
		printf("The list is empty");
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
