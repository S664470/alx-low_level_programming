#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list function that print all the element of list
 * @h: the head of the list
 *
 * File name: 0-print_listint.c
 * Auther: Shahenda Altayeb Yagub
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	
	 while (h != NULL)
	 {
		 printf("%d\n", h->n);
			 count++;
		 h = h->next;
	 }
	  return (count);
}
