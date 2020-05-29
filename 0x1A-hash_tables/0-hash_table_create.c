#include "hash_tables.h"

/**
 *hash_table_create - Will create a hash table
 *@size: variable - size of the array
 *Return: 0
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nt;

	nt = malloc(sizeof(hash_table_t));
	if (nt == NULL)
	{
		return (NULL);
	}

	nt->size = size;
	nt->array = calloc(size, sizeof(hash_node_t*));
	if (!(nt->array))
	{
		free(nt);
		return (NULL);
	}
	return (nt);
}
