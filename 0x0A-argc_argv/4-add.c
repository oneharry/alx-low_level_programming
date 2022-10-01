#include "main.h"
/**
  * add - add the numbers together
  * @argc: arguments count
  * @argv: pointer to the argument array
  * Return: integer
  */
int add(int argc, char *argv[])
{
	int x, y, num = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
	} else
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y]; y++)
			{
				if (argv[x][y] < '0' || argv[x][y] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(argv[x]);
			sum += num;
		}
		printf("%d\n", sum);
	}
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
