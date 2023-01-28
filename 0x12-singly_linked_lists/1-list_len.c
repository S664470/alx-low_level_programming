#include "lists.h"

/**
 * struct list_s - singly linked list
 * Auther: Shahenda Altsyeb yagoub 
 *  @str: string - (malloc'ed string)
 *  @len: length of the string
 *  @next: points to the next node
 *
 *   Description: singly linked list node structure
 */


size_t list_len(const list_t *h)
{
	int count = 0;

	while(h != NULL)
	{
		count++;
		h = h->next;

	}
	return(count);


}
