#include "hash_tables.h"

void free_node(hash_node_t *head);
/**
  * hash_table_delete - delete hash table
  * @ht: pointer to hash table
  * Return: void
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node;
	unsigned long int size, i;

	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			free_node(node);
		}
	}
	free(head->array);
	free(head);
}

/**
  * free_node - free a linked list
  * @head: pointer to the head of the node
  * Return: void
  */
void free_node(hash_node_t *head)
{

	hash_node_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}
