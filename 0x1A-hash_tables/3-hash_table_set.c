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
	unsigned long int i;
	hash_node_t *n;
	hash_node_t *tmp;

	if (ht == NULL)
	{
		return (0);
	}
	if (key == NULL || key[0] == '\0')
	{
		return (0);
	}
	if (ht->size == 0 || ht->array == NULL)
	{
		return (0);
	}

	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		return (0);
	}
	n->key = strdup(key);
	n->value = strdup(value);

	if (ht->array[i] != NULL)
	{
		n->next = ht->array[i];
	}
	else
	{
		n->next = NULL;
	}
	ht->array[i] = n;
	return (1);
}
