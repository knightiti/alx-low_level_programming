#include "lists.h"

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t t;

	for (t = 0; h != NULL; t++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (t);
}
