#include "main.h"
/**
  * change - prints minimun number of coins
  * @argc: arguments count
  * @argv: pointer to the argument array
  * Return: integer
  */
int change(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	while (x > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) > 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d", coins);
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
