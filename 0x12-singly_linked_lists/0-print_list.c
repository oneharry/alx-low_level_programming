#include "lists.h"

/**
  * print_list - prints all the elements
	  * @h: pointer to the struct
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *a = h;

	while (a != NULL)
	{
		if (a->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", a->len);
			printf("%s\n", a->str);
		}
		count++;
		a = a->next;
	}
	return (count);
}
