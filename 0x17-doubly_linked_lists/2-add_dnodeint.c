#include "lists.h"

/*
 * File: add_dnodeint.c
 * Auth: Shahinda Altayeb
 * disc: adds a new node at the beginning of a dlistint_t list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)

		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)

		(*head)->prev = new;
		 (*head) = new;

	return (new);
}
