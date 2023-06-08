#include <stdlib.h>

/**
 * File: hash_table_create
 * Auth: Shahinda Altayeb
 * Dias: Function to create hash table
 * @size: Is the size of the array
 * Return: Pointer to a new hash table or NULL if something wrong
 */

typedef struct hash_node_s {

        char *key;
        int value;
        struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s {
        unsigned long int size;
        hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
        hash_table_t *hash_table = malloc(sizeof(hash_table_t));
        if (hash_table == NULL) {

                return NULL;
    }

    hash_table->array = calloc(size, sizeof(hash_node_t *));

    if (hash_table->array == NULL) {

            free(hash_table);
	    
            return NULL;
    }

    hash_table->size = size;

    return hash_table;
}
