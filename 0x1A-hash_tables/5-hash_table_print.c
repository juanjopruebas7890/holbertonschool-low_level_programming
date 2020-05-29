#include "hash_tables.h"

/**
 * hash_table_print - will retrieve an value associated with a key
 * @ht: variable
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	char i = 0;
	unsigned long int p;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	for (p = 0; p < ht->size; p++)
	{
		tmp = ht->array[p];
		while (tmp != NULL)
		{
			if (i == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp->key, tmp->value);
			i = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
