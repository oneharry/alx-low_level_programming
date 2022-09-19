#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Copy string to another pointer
 * @dest: pointer argument
 * @src: pointer argument
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
	{
		if (src[x] == '\0')
			break;
		dest[x] = src[x];
	}
	src[x] = '\0';
	return (dest);
}
