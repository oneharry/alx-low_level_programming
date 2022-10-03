#include "main.h"
#include "string.h"

/**
  * _strdup - allocate new mem space which contains given str
  * @str: pointerr to the string argument to be copied
  * Return: pointer to the new allocated space
  */
char *_strdup(char *str)
{
	int i, len = 0;
	char *new;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;
	new = malloc((len + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		new[i] = str[i];
	}
	new[len] = '\0';
	return (new);
}
