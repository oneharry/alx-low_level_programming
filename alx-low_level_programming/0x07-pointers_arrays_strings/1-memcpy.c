#include "main.h"
/**
  * _memcpy - copies bytes in memory to another memory pointer
  * @dest: pointer to memory area to copy to
  * @src: the constant byte to be copied
  * @n: the number of memory to be copied
  * Return: a pointer to the updated mem
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > x; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
