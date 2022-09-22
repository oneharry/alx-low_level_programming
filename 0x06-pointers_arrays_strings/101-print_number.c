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
		_putchar('-');
		x = -x;
	}
	if (n == 0)
		_putchar('0');
	if (n / 10)
		print_number(n/10);
	_putchar((n % 10) + '0');
}
