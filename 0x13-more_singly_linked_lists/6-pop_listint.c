#include "lists.h"

/**
  * pop_listint - delete the head node of a linked list
  * @head: pointer to the head node
  * Return: void
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *t_head = *head;

	if (t_head == NULL)
		return (0);

	temp = t_head;
	t_head = t_head->next;
	free(temp);
	return (t_head->n);
}
