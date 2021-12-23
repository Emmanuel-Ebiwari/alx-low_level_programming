#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: returns the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tab;

	hash_tab = malloc(sizeof(hash_table_t));

	if (hash_tab == NULL)
		return (NULL);

	hash_tab->size = size;
	hash_tab->array = malloc(sizeof(hash_tab->array) * size);

	if (hash_tab->array == NULL)
		return (NULL);
	return (hash_tab);
}
