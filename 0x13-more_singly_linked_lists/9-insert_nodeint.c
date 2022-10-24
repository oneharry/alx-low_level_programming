#include "lists.h"

/**
  * insert_nodeint_at_index - delete the head node of a linked list
  * @head: pointer to the head node
  * @idx: index of node to be returned
  * @n: data of the node
  * Return: void
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *t_head = *head;
	listint_t *hold = *head;
	unsigned int num_of_nodes = 0;
	unsigned int i = 0;

	if (t_head == NULL)
		return (NULL);
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (hold)
	{
		num_of_nodes++;
		hold = hold->next;
	}

	if (idx > num_of_nodes)
		return (NULL);
	while (t_head)
	{
		if ((i + 1) != idx)
		{
			t_head = t_head->next;
		}
		else
		{
			temp = t_head->next;
			t_head->next = new;
			new->next = temp;
			return (new);
		}
		i++;
	}
	return (new);
}
