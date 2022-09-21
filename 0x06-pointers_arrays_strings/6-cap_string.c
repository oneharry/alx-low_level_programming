#include <stdio.h>
/**
 * cap_string - Capitalize first letter of a string
 * @str: string argument
 * Return: string with capitals
 */
char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		while (!(str[x] >= 'a' && str[x] <= 'z'))
			x++;

		if (x == 0 ||
		    str[x - 1 ] == ' ' || str[x - 1] == '\n' ||
		    str[x - 1] == '\t' || str[x - 1] == ',' ||
		    str[x - 1] == ';' || str[x - 1] == '.' ||
		    str[x + 1] == '!' || str[x - 1] == '?' ||
		    str[x + 1] == '"' || str[x - 1] == '(' ||
		    str[x + 1] == ')' || str[x - 1] == '{' ||
		    str[x - 1] == '}')
			str[x] -= 32;
		x++;
	}
	return (str);
}
