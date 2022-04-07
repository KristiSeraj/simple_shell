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
