#include "lists.h"

/**
  * free_listint2 - free a linked list
  * @head: pointer to the head node
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *t_head = *head;

	while (t_head)
	{
		temp = t_head;
		t_head = t_head->next;
		free(temp);
	}
	t_head = NULL;
	free(*head);
}
