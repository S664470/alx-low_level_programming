#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  hash_table_set - to add element to the table
 *  @ht: hash table to be updated
 *  @key: cant be an empty string
 *  @value: is the value associated to the key
 *  Return: 1 in succee otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	
