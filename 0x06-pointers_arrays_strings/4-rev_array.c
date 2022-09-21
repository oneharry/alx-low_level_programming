#include <stdio.h>
/**
 * reverse_array - reverses the content of an arra of integers
 * @a: pointer to the arra argument
 * @n: number of element of the array
 * Return: void
 */
void reverse_array(char *a, int n)
{
	int x, hold;

	for (x = n - 1; x >= n / 2; x--)
	{
		hold = a[n - x - 1];
		a[n - x - 1] = a[x];
		a[x] = hold;
	}
}
