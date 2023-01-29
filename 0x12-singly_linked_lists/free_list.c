#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Auther: Shahenda Altayeb Yagoub
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

void free_list(list_t *head)
{
	list_t *intial = head;
	list_t *next;

	while(intial != NULL)
	{
		next = intial-> next;
		free(intial->str);
		free(intial);
		intial = next;
	}
	head = NULL;
}
