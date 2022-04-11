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
	char c1;
	char c2;

	while (n--)
	{
		c1 = *s1++;
		c2 = *s2++;

		if (c1 == '\0' || c1 != c2)
			return (c1 > c2 ? 1 : (c1 < c2 ? -1 : 0));
	}

	return (0);
}
/**
 * _printenv - Function that prints an environment
 * Return: Void
 */
int _printenv(void)
{
	char *str = environ[0];
	int i = 0; /* Hostname printed twice if i is initalized 0 */

	while (str[i] != '\0')
	{
		write(1, str, _strlen(str));
		write(1, "\n", 1);
		str = environ[i];
		++i;
	}
	return (0);
}
/**
 * _getenv - imitation of getenv
 * @name: env name
 * Return: found name or NULL
 */
char *_getenv(char *name)
{
	int len = _strlen(name);
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (_str_n_cmp(environ[i], name, len) == 0)
			return (&environ[i][len]);
	}
	return (NULL);
}
