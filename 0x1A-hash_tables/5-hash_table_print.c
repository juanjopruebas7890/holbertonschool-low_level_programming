#include "hash_tables.h"

/**
 * hash_table_print - will retrieve an value associated with a key
 * @ht: variable
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int p = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (p == 1)
			{
				printf(", ");
			}
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp != NULL)
				{
					printf(", ");
				}
			}
			p = 1;
		}
	}
	printf("}\n");
}
