#include "hash_tables.h"

/**
 *key_index - Will gice the index of the key
 *@key: variable - Key in the hash table
 *@size: variable - Size of the array of the hash table
 *Return: 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hash;
	unsigned int in;

	if (key == NULL || size == 0)
	{
		return (0);
	}
	hash = hash_djb2(key);
	in = hash % size;
	return (in);
}
