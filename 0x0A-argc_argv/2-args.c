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
	for (num = 0; argc > 1 && num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
}
int main(int argc, char *argv[])
{
	args(argc, argv);
	return (0);
}
