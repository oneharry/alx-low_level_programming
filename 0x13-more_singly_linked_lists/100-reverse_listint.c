#include "lists.h"

/**
  * reverse_listint - reverse a linked list
  * @head: pointer to the head node
  * Return: 1 if delete success
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *new;


	if (temp == NULL)
		return (NULL);
	if (temp->next == NULL)
		return (temp);

	return (reverse_listint(head));
	/**
	while (temp)
	{
		temp = temp->next;
		new = reverse_listint(head);
	}*/
	return (new);
}
