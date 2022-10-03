#include "main.h"
#include "string.h"

/**
  * str_concat - allocate space to hold conc of two strs
  * @s1: pointerr to string
  * @s2: pointer to string 2
  * Return: pointer to the new allocated space
  */
char *str_concat(char *s1, char *s2)
{
	int i, len = 0;
	int x = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		len++;
	new = malloc(len * sizeof(char));
	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		new[x++] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		new[x++] = s2[i];
	}

	return (new);
}
