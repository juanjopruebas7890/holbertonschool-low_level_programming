#include "hash_tables.h"

/**
 * hash_table_print - will retrieve an value associated with a key
 * @ht: variable
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *n;
	int p = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (i < ht->size)
	{
		n = ht->array[i];
		if (n != NULL)
		{
			if (p == 0)
			{
				printf("'%s': '%s'", n->key, n->value);
				p = 1;
			}
			else
			{
				printf(", '%s': '%s'", n->key, n->value);
			}
			n = n->next;
		}
		i++;
	}
	printf("}\n");
}
