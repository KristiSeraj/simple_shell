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
/**
 * _strcpy - Copies a string
 * @dest: First operand destination
 * @src: Second operand source
 * Return: Return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = _strlen(src);

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - Duplicates a string
 * @string: A pointer to char
 * Return: A pointer or NULL
 */
char *_strdup(char *string)
{
	int i;
	char *copy;
	int length = _strlen(string);

	if (string == NULL)
		return (NULL);
	copy = malloc((length + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		copy[i] = string[i];
	return (copy);
}
