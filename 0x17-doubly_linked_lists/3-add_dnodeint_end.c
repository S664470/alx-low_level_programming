#include "lists.h"

/*
 * File: add_dnodeint_end.c
 * Auth: Shahinda Altayeb
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = *head;
	new->next = NULL;
	 
	if (*head == NULL)
	{
		(*head)->prev =Null;
        	(*head) = new;
	        return (new);
	}
	return (new);
}


