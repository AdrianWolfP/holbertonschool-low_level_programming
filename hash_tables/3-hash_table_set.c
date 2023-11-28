#include "hash_tables.h"

/**
 * hash_table_set - element is added to a hash table
 * @ht: hash table that will be added to
 * @key: key to be added 
 * @value: value to be added 
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hahh_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *elem = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);
	idx = key_index((unsigned char *) key, ht->size);
	elem = ht->array[idx];

	if (elem && strcmp(key, elem->key) == 0)
	{
		free(elem->value);
		elem->value = strdup(value);
		return (1);
	}

	new_ node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}