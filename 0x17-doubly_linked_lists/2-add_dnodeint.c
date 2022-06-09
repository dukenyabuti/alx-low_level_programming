#include "lists.h"

/**
 * add_dnodeint - add a node at head of d list
 * @head: the head
 * @n: the int to add
 * Return: addy of new node or NULL on fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* declarations */
	dlistint_t *new = malloc(sizeof(dlistint_t));

	/* check for null && malloc fail, free new if it exists, return null */
	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	/* give new  things to node */
	new->n = n;
	new->prev = NULL;
	/* no other nodes, this becomes ending node */
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	/* fit it in here*/
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
