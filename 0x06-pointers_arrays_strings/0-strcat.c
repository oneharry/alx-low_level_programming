#include <stdio.h>
/**
 * _strcat - Concatenate two strings
 * @dest: first argument string to be concatenated
 * @src: second argument string to be added to dest
 * Return: a pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int len = 0;
	while (dest[x])
		len++;
	while (src[x])
	{
		dest[len] = src[x];
		len++;
		x++;

	}
	return (dest);
}
