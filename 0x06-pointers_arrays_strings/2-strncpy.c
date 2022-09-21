#include <stdio.h>
/**
 * _strcpy - Concatenate two strings
 * @dest: first argument string to be concatenated
 * @src: second argument string to be added to dest
 * @n: number of char from src to be appended to the first arg
 * Return: a pointer to the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
