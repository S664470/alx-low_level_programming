#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

typedef struct node {
    char* key;
    char* value;
    struct node* next;
} node_t;

typedef struct {
    node_t* buckets[TABLE_SIZE];
} hash_table_t;

unsigned int hash(const char* key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash * 31) + *key;
        key++;
    }
    return hash % TABLE_SIZE;
}

node_t* create_node(const char* key, const char* value) {
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    if (new_node == NULL) {
        fprintf(stderr, "Failed to allocate memory for new node.\n");
        return NULL;
    }
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;
    return new_node;
}


int hash_table_set(hash_table_t* ht, const char* key, const char* value) {
    if (ht == NULL || key == NULL || *key == '\0') {
        return 0;
    }

    unsigned int index = hash(key);
    node_t* new_node = create_node(key, value);
    if (new_node == NULL) {
        return 0;
    }

   
    if (ht->buckets[index] == NULL) {
        ht->buckets[index] = new_node;
    } else {

        new_node->next = ht->buckets[index];
        ht->buckets[index] = new_node;
    }

    return 1;
}

int main() {
    hash_table_t ht;

    memset(&ht, 0, sizeof(hash_table_t));

    hash_table_set(&ht, "key1", "value1");
    hash_table_set(&ht, "key2", "value2");
    hash_table_set(&ht, "key3", "value3");

    for (int i = 0; i < TABLE_SIZE; i++) {
        node_t* current = ht.buckets[i];
        while (current != NULL) {
            printf("Key: %s, Value: %s\n", current->key, current->value);
            current = current->next;
        }
    }

    return 0;
}
