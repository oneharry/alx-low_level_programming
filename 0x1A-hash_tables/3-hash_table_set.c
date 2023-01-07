#include "hash_tables.h"

hash_node_t *create_node(const char *key, const char *value);
void handle_collision(hash_table_t *ht,
		unsigned long int index, hash_node_t *node);
hash_node_t *add_node_beg(hash_node_t *head, hash_node_t *node);

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
	hash_node_t *new_node, *node, *temp;
	const unsigned char *new_key = (const unsigned char *) key;

	if (ht == NULL || key == NULL)
		return (0);
	size = ht->size;
	new_node = create_node(key, value);
	index = key_index(new_key, size);
	node = ht->array[index];

	if (node == NULL)
	{
		ht->array[index] = add_node_beg(node, new_node);
	}
	else
	{
		temp = node;
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				strcpy(ht->array[index]->value, strdup(value));
				return (1);
			}
			temp = temp->next;
		}

		ht->array[index] = add_node_beg(node, new_node);
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

	if (node == NULL)
		return (NULL);
	node->key = (char *) malloc(strlen(key) + 1);
	node->value = (char *) malloc(strlen(value) + 1);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	if (node->value == NULL)
	{
		free(node);
		free(node->key);
		return (NULL);
	}

	strcpy(node->key, key);
	strcpy(node->value, strdup(value));
	node->next = NULL;
	return (node);
}

/**
  * add_node_beg - add node at end of the linked list
  * @head: head node
  * @node: node to be added to the list
  * Return: pointer to the head of list
  */
hash_node_t *add_node_beg(hash_node_t *head, hash_node_t *node)
{
	if (head == NULL)
	{
		head = node;
		return (head);
	}
	node->next = head;
	head = node;
	return (head);
}
