#include "main.h"
/**
  * _sqrt_recursion - gets the square root of a number
  * @n: - argument n
  * Return: returns 0 or 1 if the integer is a prime number
  */
/**
  * _is_sqrt - checks if a number is a prime
  * @x: inter arg 1
  * @y: int arg 2
  * Return: number thats a square root
  */
int _is_divide										(int x, int y)
{
	if ((x % y) == 0)
		return (0);
	if (y == (x / 2))
		return (1);
	return (_is_divide(x, y + 1);
}

int _sqrt_recursion(int n)
{
	if (n <= 1)
		return (0);
	if (n > 1 && n < 4)
		return (1);
	return(_is_divide(n, 2);
}
