#include <stdio.h>
#include "main.h"
/**
 * _abs - Computes the absolute value of an integer argument
 * @n: The integer argument to be computed
* Return: Always the computed value of the int
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	} else if (n < 0)
	{
		return (n * -1);
	} else if (n == 0)
	{
		return (0);
	}
	return (0);
}
