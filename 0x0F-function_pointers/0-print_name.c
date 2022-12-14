#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: pointer to name to be printed
  * @f: function pointer to function that prints name
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
