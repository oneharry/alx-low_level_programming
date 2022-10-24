#include "lists.h"

/**
  * delete_nodeint_at_index - delete the node at index
  * @head: pointer to the head node
  * @idx: index of node to be deleted
  * Return: 1 if delete success
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *t_head = *head;

	unsigned int i = 0;

	if (t_head == NULL)
		return (-1);
	while (t_head)
	{
		if ((i + 1) != index)
		{
			t_head = t_head->next;
		}
		else
		{
			temp = t_head;
			t_head = t_head->next;
			free(temp);
			return (1);
		}
		i++;
	}
	return (-1);
}
