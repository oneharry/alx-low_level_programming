#include <stdio.h>
/**
 * reverse_array - reverses the content of an arra of integers
 * @a: pointer to the arra argument
 * @n: number of element of the array
 * Return: void
 */
void reverse_array(char *a, int n)
{
	int x, hold, len;

	if (n % 2 == 0)
		len = n;
	else
		len = n + 1;
	for (x = 0; x < len / 2; x++)
	{
		hold = a[x];
		a[x] = a[n - 1];
		a[n - 1] = hold;
	}
}
