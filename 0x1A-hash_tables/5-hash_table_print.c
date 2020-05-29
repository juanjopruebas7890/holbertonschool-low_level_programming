#include "hash_tables.h"

/**
 * hash_table_print - will retrieve an value associated with a key
 * @ht: variable
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	int i = 0;
	unsigned long int p;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	for (p = 0; p < ht->size; p++)
	{
		n = ht->array[p];
		while (n != NULL)
		{
			if (i)
			{
				printf(", ");
			}
			printf("'%s': '%s'", n->key, n->value);
			i = 1;
			n = n->next;
		}
	}
	printf("}\n");
}
