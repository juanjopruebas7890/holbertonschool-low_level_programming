#include "hash_tables.h"

/**
 * hash_table_set - Will Add an new element to the hash table.
 * @ht: variable
 * @key: variable
 * @value: variable
 * Return: 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int i = 0;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] != NULL && strcmp(ht->array[i]->key, key) == 0)
	{
		free(ht->array[i]->value);
		ht->array[i]->value = strdup(value);
		return (1);
	}
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		return (0);
	}
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = ht->array[i];
	ht->array[i] = tmp;
	return (1);
}
