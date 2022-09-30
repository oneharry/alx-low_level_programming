#include "main.h"
/**
  * mynameis - Prints the name of the program called
  * @argc: arguments count
  * @argv: pointer to the argument array
  * Return: void
  */
void mynameis(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
}
int main(int argc, char *argv[])
{
	mynameis(argc, argv);
	return (0);
}
