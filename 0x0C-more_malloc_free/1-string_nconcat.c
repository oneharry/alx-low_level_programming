#include "main.h"

/**
  * string_nconcat - concatenates two strings
  * @s1: pointer tot first str
  * @s2: pointer to second arg str
  * @n: number of s2 to be concat
  * Return: pointer to allocated char mem space
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = n, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x]; x++)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	len = 0;

	for (x = 0; s1[x]; x++)
		str[len++] = s1[x];
	for (x = 0; s2[x] && x < n; x++)
		str[len++] = s2[x];
	str[len] = '\0';

	return (str);
}
