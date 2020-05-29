#include "hash_tables.h"

/**
 * hash_table_get - will retrieve an value associated with a key
 * @ht: variable
 * @key: variable
 * Return: 0
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n = NULL;
	unsigned int i;

	if (ht == NULL || key == NULL || !key[0])
	{
		return (NULL);
	}

	i = key_index((unsigned char *)key, ht->size);
	n = ht->array[i];

	while (n != NULL)
	{
		if (!strcmp(n->key, key))
		{
			return (n->value);
		}
		n = n->next;
	}
	return (NULL);
}
