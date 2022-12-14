#include "main.h"
/**
  * mul - prints the result of multiplication
  * @argc: arguments count
  * @argv: pointer to the argument array
  * Return: int
  */
int mul(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", (x * y));

	return (0);

}
/**
  * main -  entry point into the program
  * @argc: argument
  * @argv: arguments strings
  * Return: 0
  */
int main(int argc, char *argv[])
{
	mul(argc, argv);
	return (0);
}
