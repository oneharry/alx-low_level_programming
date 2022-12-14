#include "dog.h"
/**
  * free_dog - free memory alloc
  * @d: dog instaance
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
