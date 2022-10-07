#include "main.h"

/**
  * _realloc - reallocate the mem size
  * @ptr: pointer to prev allocated mem
  * @old_size: size in bytes of allocate ptr
  * @new_size: size of new alloc memory
  * Return: void
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int size;

	char *new_ptr;

	if (ptr == NULL)
		new_ptr = malloc(sizeof(*new_ptr) * new_size);
	if (new_size > old_size)
	{
		size = new_size + old_size;
		new_ptr = malloc(sizeof(*new_ptr) * size);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr == NULL)
		free(ptr);

	return (new_ptr);
	free(new_ptr);
}
