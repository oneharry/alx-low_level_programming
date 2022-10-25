#include "lists.h"

/**
  * print_listint_safe - prints number of node
  * @head: pointer to the head node
  * Return:  number pf nodes
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t num = 0;

	if (temp == NULL)
		return (0);
	while (temp)
		num = 1 + print_listint_safe(temp->next);
	return (num);
}
