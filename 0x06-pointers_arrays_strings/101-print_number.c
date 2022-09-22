#include <stdio.h>
/**
 * print_number - print numbers only
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int x = n;
	if (n < 0)
	{
		putchar('-');
		x = -x;
	}

	if ((x / 10))
		print_number(x/10);
	putchar((x % 10) + '0');
}
