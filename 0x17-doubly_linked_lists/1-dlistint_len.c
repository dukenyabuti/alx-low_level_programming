#include "lists.h"

/**
 * dlistint_len - get number of nodes
 * @h: the head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	/* declarings*/
	int nodes = 0;

	/* counts nodes */
	while (h)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
