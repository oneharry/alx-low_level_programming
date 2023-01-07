#include "hash_tables.h"

/**
  * hash_table_get - get a value associated with a key in a hash table
  * @ht: pointer to hash table
  * @key: key's value to be retrieved
  * Return: value of the key
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *node;
	const unsigned char *new_key = (const unsigned char *) key;

	if (ht == NULL)
		return (NULL);
	size = ht->size;
	index = key_index(new_key, size);
	node = ht->array[index];

	if (node == NULL)
		return (NULL);
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
