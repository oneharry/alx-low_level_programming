#include "lists.h"

/**
  * get_nodeint_at_index - delete the head node of a linked list
  * @head: pointer to the head node
  * @index: index of node to be returned
  * Return: void
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = (listint_t *)malloc(sizeof(listint_t));
	if (index == 1)
	{
		new = head;
		return (new);
	}
	while (head)
	{
		if (i++ == index)
		{
			new = head;
			return (new);
		}
		head = head->next;
	}
	return (NULL);
}
