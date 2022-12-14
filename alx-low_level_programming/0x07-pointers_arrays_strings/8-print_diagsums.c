#include "main.h"
/**
  * print_diagsums -  prints the sum of two diagonals
  * @a: pointer to an array
  * @size: size of the matrix of integer
  * Return: void
*/
void print_diagsums(int *a, int size)
{
	int x, y;
	int num1 = 0;
	int num2 = 0;

	for (x = 0; x < size; x++)
	{
		num1 = num1 + a[x];
		a = a + size;
	}
	a = a - size;
	for (y = 0; y < size; y++)
	{
		num2 = num2 + a[y];
		a = a - size;
	}
	printf("%d, %d\n", num1, num2);
}
