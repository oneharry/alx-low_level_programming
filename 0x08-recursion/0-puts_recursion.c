#include "main.h"
/**
  * _print_rev_recursion - print the reerse string using recursion
  * @s - pointer to the stri ng
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\0');
		_putchar('\n');
	}
i	else
	{
		_putchar(*(s++));
		_print_rev_recursion(s);
	}

}
