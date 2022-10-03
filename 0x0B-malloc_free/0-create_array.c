#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: size
  * @c: initialize to c
  * Return: pointer to the created array
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	while (i++ < size)
		str[i] = c;
	return (str);
}
