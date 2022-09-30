#include "main.h"
/**
  * add - add the numbers together
  * @argc: arguments count
  * @argv: pointer to the argument array
  * Return: integer
  */
int add(int argc, char *argv[])
{
	int x, num, y;
	int sum = 0;

	if (argc == 1)
	{
		printf("0");
	}

	for (x = 0; x < argc; x++)
	{
		num = argv[x][y];
		for (y = 0; argv[x][y]; y++)
		{
			(num >= 0 || num < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[x]);
		}
	}
	printf("%d", sum);
	return (0);

}
/**
  * main - entry point into the program
  * @argc: arguments count
  * @argv: arguments string
  * Return: 0 success
  */
int main(int argc, char *argv[])
{
	add(argc, argv);
	return (0);
}
