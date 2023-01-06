#include "hash_tables.h"

hash_node_t *create_node(const char *key, const char *value);

/**
  * hash_table_set - adds an element to the hash table
  * @key: key to be added/updated
  * @ht: pointer to hashtable
  * @value: value of a key
  * Return: 1 if it succeess, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, index, hash;
	hash_node_t *new_node;

	size = ht->size;
	new_node = create_node(key, value);
	index = key_index(key, size);
	hash_node_t *node = ht->array[index];

	if (node == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		if (strcmp(node->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value)
		}
	}
	return (1);

}

/**
  * create_node - create node
  * @key: key
  * @value: value
  * Return: pointer to node
  */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = (hash_node_t *) malloc(sizeof(hash_node_t));

	node->key = (char *) malloc(strlen(key) + 1);
	node->value = (char *) malloc(strlen(value) + 1);

	strcpy(node->key, key);
	strcpy(node->value, value);

	return (node);
}
