#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: argument value
  * Return: pointer to allocated mem
  */
void *malloc_checked(unsigned int b)
{
	void *aloc = malloc(b);

	if (aloc == NULL)
		exit(98);
	return (aloc);
}
