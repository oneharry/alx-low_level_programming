#include "dog.h"
/**
  * len - length of string
  * @str: string arg
  * Return: int
  */
int len(char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}
/**
  * _strcpy - copy string
  * @des: destination
  * @src: source
  * Return: pointer to the dest
  */
char *_strcpy(char *des, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
		des[x] = src[x];
	des[x] = '\0';
	return (des);
}
/**
  * new_dog - new dog created
  * @name: name of new dog
  * @age: age of new dog
  * @owner: owner of new dog
  * Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc(sizeof(char) * len(name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(char) * len(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}
	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->owner = _strcpy(my_dog->owner, owner);
	my_dog->age = age;
	return (my_dog);
}
