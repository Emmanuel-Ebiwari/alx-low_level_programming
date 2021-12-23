#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: the key to look for
 * Return: the vlaue or NULL on fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *hash_tab;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);

	if (ht->array[idx] == NULL || ht->array[idx] == 0)
		return (NULL);

	if (strcmp(ht->array[idx]->key, key) == 0)
		return (ht->array[idx]->value);
	hash_tab = ht->array[idx];
	while (hash_tab != NULL)
	{
		if (strcmp(hash_tab->key, key) == 0)
			return (hash_tab->value);
		hash_tab = hash_tab->next;
	}

	return (NULL);
}
