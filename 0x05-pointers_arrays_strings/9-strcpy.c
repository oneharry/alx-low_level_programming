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
	char *hold =  dest;

	while ((*dest++ = *src++))
		;
	return (hold);
}
