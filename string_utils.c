#include "shell.h"

/**
 * _strlen - find the length of a string
 * @string: string to find the length
 * Return: the length of the string
 */
int _strlen(char *string)
{
	int count = 0;

	while (string[count] != '\0')
		count++;
	return (count);
}

/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	
	i = _strlen(dest);

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		++j;
		++i;
	}

	dest[i] = '\0';

	return (dest);
}
