#include <stdio.h>
#include "main.h"
/**
 * print_sign - Prints a sign depending on the sign of an integer
 * @n: An integer n to be checked
 * Return: Returns +, - or 0 depending on the number entered.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
