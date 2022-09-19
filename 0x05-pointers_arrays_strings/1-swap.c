#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the vslues of the 2 argument
 * @a: takes a pointer as an argument
 * @b: second argument
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;
	*a = y, *b = x;
}
