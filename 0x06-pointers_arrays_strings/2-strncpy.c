#include <stdio.h>
/**
 * _strncpy - Concatenate two strings
 * @dest: first argument string to be concatenated
 * @src: second argument string to be added to dest
 * @n: number of char from src to be appended to the first arg
 * Return: a pointer to the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;
	int len = 0;

	while (src[x])
		len++;
	for (x = 0; x < n && src[x]; x++)
	{
		dest[x] = src[x];
	}
	for (y = len; y < n; y++)
	{
		dest[y] = '\0';
	}
	return (dest);
}
