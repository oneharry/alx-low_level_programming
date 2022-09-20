#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - Entry point, generates rsndom numbers
 */
int main(void)
{
	int x;
	int random_num = 0;
	char alphaUpper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alphaLow[] = "abcdefghijklmnopqrstuvwxyz";
	char symbols[] = "@#$%&*^?";
	char integers[] = "1234567890";
	char password[50];

	printf("Hello here\n");
	srand(time(NULL));

	random_num = rand() % 4;
	for (x = 0; x < 50; x++)
	{
		if ((random_num == 1))
		{
			password[x] = integers[rand() % 10];
			random_num = (rand() % 4);
			printf("%c", password[x]);
		} else if ((random_num == 2))
		{
			password[x] = symbols[rand() % 8];
			random_num = (rand() % 4);
			printf("%c", password[x]);
		} else if ((random_num == 3))
		{
			password[x] = alphaUpper[rand() % 26];
			random_num = (rand() % 4);
			printf("%c", password[x]);
		} else
		{
			password[x] = alphaLow[rand() % 26];
			random_num = (rand() % 4);
			printf("%c", password[x]);
		}
	}
	return (0);
}
