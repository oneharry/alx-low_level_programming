#include "main.h"
/**
  * mul - prints the result of multiplication
  * @argc: arguments count
  * @argv: pointer to the argument array
  * Return: int
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
int mul(int argc, char *argv[])
{
	int x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	} else 
	{
		x = convert_to_int(argv[1]);
		y = convert_to_int(argv[2]);
		printf("%d\n", (x * y));
	}
	return (0);

}
int main(int argc, char *argv[])
{
	mul(argc, argv);
	return (0);
}
