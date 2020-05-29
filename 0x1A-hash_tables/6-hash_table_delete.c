#include "hash_tables.h"

/**
 *hash_table_delete - Will delete a hash table
 *@ht: variable
 *Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;

	if (ht == NULL)
	{
		return;
	}
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			free(tmp->key);
			free(tmp->value);
			ht->array[i] = ht->array[i]->next;
			free(tmp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
