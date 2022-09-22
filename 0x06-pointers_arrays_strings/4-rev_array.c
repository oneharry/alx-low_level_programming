#include <stdio.h>
/**
 * reverse_array - reverses the content of an arra of integers
 * @a: pointer to the arra argument
 * @n: number of element of the array
 * Return: void
 */
void reverse_array(char *a, int n)
{
	int x = 0;
	int hold;

	for (x = 0; x < n / 2; x++)
	{
		hold = a[x];
		a[x] = a[n - x];
		a[n] = hold;
	}
}
