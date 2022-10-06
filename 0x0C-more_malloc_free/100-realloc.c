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
	if (ptr == NULL)
		return (NULL);
	if (old_size > new_size)
		return (NULL);
	return (NULL);
}
