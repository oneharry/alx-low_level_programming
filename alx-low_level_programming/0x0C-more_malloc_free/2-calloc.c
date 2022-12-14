#include "main.h"

/**
  * _calloc - allocates memory for an array
  * @nmemb: num of elements
  * @size: sizes in bytes of element
  * Return: pointer to allocated arr mem space
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *aloc;
	char *arr;
	unsigned int x;

	if (size == 0 || nmemb == 0)
		return (NULL);
	aloc = malloc(size * nmemb);

	if (aloc == NULL)
		return (NULL);
	arr = aloc;
	for (x = 0; (size * nmemb) > x; x++)
		arr[x] = '\0';
	return (aloc);
}
