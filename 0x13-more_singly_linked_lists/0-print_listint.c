#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints the whole singly linked list
 * @h: is just a pointer to head of the linked list
 *
 * Return: The number of elements in the list of type unsigned int
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		len++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (len);
}
