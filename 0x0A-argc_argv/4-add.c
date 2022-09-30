#include "main.h"
/**
  * add - add the numbers together
  * @argc: arguments count
  * @argv: pointer to the argument array
  * Return: integer
  */
int convert_to_int(char c[])
{
	int sig, a = 0;
	int x = 0;

	if (c[0] == '-')
	{
		sig = -1;
		x = 1;
	}

	while(c[x] != '\0')
	{
		a = a * 10 + (c[x] - '0');
		x++;
	}
	if (sig == -1)
		a = -a;

	return a;
}
int add(int argc, char *argv[])
{
	int x;
	int y = 0;
	if (argc == 1)
	{
		printf("0");
	}

	for (x = 0; argc > 1 && x < argc; x++)
	{
		int num = convert_to_int(argv[x]);
		if (num >= 0 || num < 0)
		{
			y = y + num;
			continue;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d", y);
	return (0);

}
int main(int argc, char *argv[])
{
	add(argc, argv);
	return (0);
}
