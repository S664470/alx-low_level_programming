#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create-create a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table, or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/**function implemintation*/

	hash_table_t *table;
	hash_table_t **hash_node_s;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	hash_node_s = malloc(sizeof(hash_table_t));
		if (hash_node_s == NULL)
			return (NULL);
	table->size = size;
	return (table);

	free(table);
	free(table->array);
}
