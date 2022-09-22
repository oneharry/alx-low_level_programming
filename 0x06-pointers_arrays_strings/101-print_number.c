#include <stdio.h>
/**
 * print_number - print numbers only
 * @n: integer
 * Return: pointer to the encoded string
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	if(n/10)
		print_number(n/10);
	_putchar(n % 10 + '0');
}
