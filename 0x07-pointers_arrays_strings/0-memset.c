#include "main.h"
/**
  * _memset - Fills n bytes memory with another byte
  * @s: pointer to memory area
  * @b: the constant byte to be copied
  * @n: the number of memory to be copied
  * Return: a pointer to the updated mem
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	unsigned char *str = s, buf = b;

	for (x = 0; x < n; x++)
	{
		str[x] = buf;
	}
	_putchar('\n');
	return (s);
}
