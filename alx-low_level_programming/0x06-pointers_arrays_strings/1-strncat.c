#include <stdio.h>
/**
 * _strncat - Concatenate two strings
 * @dest: first argument string to be concatenated
 * @src: second argument string to be added to dest
 * @n: number of char from src to be appended to the first arg
 * Return: a pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int len = 0;

	while (dest[len])
	{
		len++;
	}
	for (x = 0; src[x] && x < n; x++)
	{
		dest[len + x] = src[x];
	}
	dest[len + x] = '\0';
	return (dest);
}
