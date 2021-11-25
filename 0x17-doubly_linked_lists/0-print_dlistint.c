#include<stdio.h>
#include "lists.h"
/*
 *print_dlistint - Function that prints list of DLL
 *
 * @h - parameter
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_nodes = 0;

	if(!h)
		return (0);
	while (h)
	{
		no_nodes++;
		h = h->prev;
		printf("%d\n", h->n);
	}
	return (no_nodes);
}
