#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
  * struct dog - struct for dogs
  * @age: age of the dog
  * @name: name of the dog
  * @owner: owner of the dog
  */
typedef struct dog
{
	float age;
	char *name;
	char *owner;
} dog;
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
