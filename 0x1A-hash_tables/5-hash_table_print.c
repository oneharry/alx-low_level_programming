#include "hash_tables.h"

void print_node(hash_node_t *head);
/**
  * hash_table_print - prints hash table
  * @ht: pointer to the hash table
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i, j = 0;
	hash_node_t *node;

	size = ht->size;
	if (ht == NULL)
	{
		return;
	}
	else
	{
		printf("{");
		for (i = 0; i < size; i++)
		{
			if (ht->array[i] == NULL)
				continue;
			if (j > 0)
				printf(", ");
			node = ht->array[i];
			print_node(node);
			j++;
		}
		printf("}\n");
	}
}

/**
  * print_node - prints linked list
  * @head: pointer to the head of the list
  * Return: void
  */
void print_node(hash_node_t *head)
{
	while (head)
	{
		printf("'%s': '%s'", head->key, head->value);
		head = head->next;
		if (head)
			printf(", ");
	}
}
