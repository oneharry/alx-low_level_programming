#include "hash_tables.h"

hash_node_t *create_node(const char *key, const char *value);
void handle_collision(hash_table_t *ht,
		unsigned long int index, hash_node_t *node);
int add_node_end(hash_node_t *head, hash_node_t *node);

/**
  * hash_table_set - adds an element to the hash table
  * @key: key to be added/updated
  * @ht: pointer to hashtable
  * @value: value of a key
  * Return: 1 if it succeess, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, index;
	hash_node_t *new_node, *node;
	const unsigned char *new_key = (const unsigned char *) key;

	size = ht->size;
	new_node = create_node(key, value);
	index = key_index(new_key, size);
	node = ht->array[index];

	if (node == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		if (strcmp(node->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
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
	node->next = NULL;

	return (node);
}

/**
  * handle_collision - handle collision of index in a hashtable
  * @ht: pointer to the table
  * @index: index of the node in the array
  * @node: node
  * Return: void
  */
void handle_collision(hash_table_t *ht,
		unsigned long int index, hash_node_t *node)
{
	 hash_node_t *temp;

	 temp = ht->array[index];
	 add_node_end(node, temp);
}

/**
  * add_node_end - add node at end of the linked list
  * @head: head node
  * @node: node to be added to the list
  * Return: 0 for success
  */
int add_node_end(hash_node_t *head, hash_node_t *node)
{
	hash_node_t *temp = head;

	while (temp->next)
		temp = temp->next;
	temp->next = node;
	return (0);
}
