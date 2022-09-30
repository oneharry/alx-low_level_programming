#include "main.h"
/**
  * nargs - Prints the number of arguments passed into the program
  * @argc: arguments count
  * @argv: pointer to the argument array
  * Return: void
  */
void nargs(int argc, char *argv[])
{
	int num = 0;
	while (*argv && argc > 1)
	{
		num = num + 1;
		argv++;
	}
	printf("%d\n", (argc - 1));
}
int main(int argc, char *argv[])
{
	nargs(argc, argv);
	return (0);
}
