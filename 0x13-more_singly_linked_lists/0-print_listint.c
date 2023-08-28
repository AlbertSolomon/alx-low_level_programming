#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * print_listint - prints the whole singly linked list
 * @h: is just a pointer to head of the linked list
 *
 * Return: The number of elements in the list of type unsigned int
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;

	if (h == NULL)
		printf("The list is empty");

	while (h != NULL)
	{
		len++;
		printf("%i\n", h->n);
		h = h->next;
	}
	return (len);
}
