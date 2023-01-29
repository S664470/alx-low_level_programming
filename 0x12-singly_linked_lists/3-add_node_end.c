#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Auther: Shahenda Altayeb Yagoub
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = NULL;
	if(newNode == NULL)
		return(NULL);

	newNode = malloc(sizeof(list_t));
	newNode->str = strdup(str);

	if(newNode->str == NULL)
		free(newNode);
	        return(NULL);

		newNode->next = NULL;
		if(*head == NULL)
			*head = newNode;
		return(newNode);
}
