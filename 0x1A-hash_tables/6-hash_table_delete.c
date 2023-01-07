#include "hash_tables.h"

void free_node(hash_node_t *head);
/**
  * hash_table_delete - delete hash table
  * @ht: pointer to hash table
  * Return: void
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i;

	size = ht->size;
	if (ht == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
			free_node(ht->array[i]);
	}
	free(ht->array);
	free(ht);
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
		temp = head;
		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
