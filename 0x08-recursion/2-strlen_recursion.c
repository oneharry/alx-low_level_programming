#include "main.h"
/**
  * _strlen_recursion - print a string using recursion
  * @s: - pointer to the stri ng
  * Return: void
  */
int _strlen_recursion(char *s)
{
	if (!s*)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
