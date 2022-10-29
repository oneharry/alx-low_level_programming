#include "main.h"
#include <stdio.h>
/**
  * get_bit - get the value of a bit at a given index
  * @n: inter argumen
  * @index: the ndex
  * Return: the integer at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n >= ULONG_MAX)
		return (-1);
	return ((n >> index) & 1);
}
