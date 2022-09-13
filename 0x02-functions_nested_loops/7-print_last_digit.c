#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The argument number
* Return: returns the last digit
 */
int print_last_digit(int n)
{
	int lastDig;

	if (n < 0)
		lastDig = 10 - (n % 10);
	else
		lastDig = n % 10;
	_putchar(lastDig + '0');
	return (lastDig);
}

