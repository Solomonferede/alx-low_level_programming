#include<stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		no_nodes++;
		h = h->prev;
		printf("%d\n", h->n);
	}
	return (no_nodes);
}
