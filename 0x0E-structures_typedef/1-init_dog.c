#include "dog.h"


/**
  * init_dog - initialize a variable of dog
  * @d: instance of dog struct
  * @name: name variable of the dog
  * @age: Age variable of a dog
  * @owner: owner variable of a dog
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
