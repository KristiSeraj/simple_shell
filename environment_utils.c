#include "shell.h"
/**
 * _str_n_cmp - String compares also bytes
 * @s1: First operand a string
 * @s2: Second operand a string
 * @n: Third operand an int
 * Return: Returns 1, -1 or 0
 */
int _str_n_cmp(char *s1, char *s2, int n)
{
	int i, diff;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i <= n))
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			diff = 0;
		i++;
	}
	return (diff);
}
/**
 * _printenv - Function that prints an environment
 * Return: Void
 */
int _printenv(void)
{
	char *str = environ[0];
	int i = 1; /* Hostname printed twice if i is initalized 0 */

	while (str[i] != '\0')
	{
		write(1, str, _strlen(str));
		write(1, "\n", 1);
		str = environ[i];
		++i;
	}
	return (0);
}
