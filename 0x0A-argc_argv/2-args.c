#include "main.h"
/**
  * args - Prints the arguments passed into the program
  * @argc: arguments count
  * @argv: pointer to the argument array
  * Return: void
  */
void args(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
}
/**
  * main - entry point into the program
  * @argc: argument count
  * @argv: argument literals
  * Return: 0 success
  */
int main(int argc, char *argv[])
{
	args(argc, argv);
	return (0);
}
