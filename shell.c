#include "shell.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument values
 * Return: Always 0 (Success)
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	char *line = NULL;
	size_t buff_size = 0;
	ssize_t characters = 0;

	name = argv[0];

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(1, "$ ", 2);
		characters = getline(&line, &buff_size, stdin);

		if (characters == -1)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(1, "\n", 1);
			break;
		}

		if (line[characters - 1] == '\n')
			line[characters - 1] = '\0';
		if (*line == '\0')
			continue;
		if (command_read(line, characters) == 2)
			break;
	}
	free(line);
	line = NULL;
	return (0);
}
/**
 * command_read - function that reads the commands
 * @s: command
 * @characters: characters of command
 * Return: return int from execute command
 */
int command_read(char *s, size_t __attribute__ ((unused)) characters)
{
	char *token = NULL;
	char *cmd_array[100];
	int i = 0;

	if (_strcmp(s, "exit") == 0)
		return (2);
	if (_strcmp(s, "env") == 0)
		return (_printenv());

	token = strtok(s, " ");
	while (token)
	{
		cmd_array[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	cmd_array[i] = NULL;

	return (execute(cmd_array));
}
/**
 * execute - Function that executes the shell
 * @cmd_array: First operand a pointer
 * Return: Return an int
 */
int execute(char *cmd_array[])
{
	char *exe_path = NULL;
	char *cmd = NULL;
	pid_t pid;
	int status;

	cmd = cmd_array[0];
	exe_path = command_path(cmd);
	if (exe_path == NULL)
	{
		write(2, _strcat(cmd, ": Not found\n"), _strlen(cmd) + 12);
		return (3);
	}
	pid = fork();
	if (pid < 0)
	{
		perror("Error creating child\n");
		return (-1);
	}
	if (pid > 0)
		wait(&status);
	else if (pid == 0)
	{
		execve(exe_path, cmd_array, environ);
		perror("Error");
		exit(1);
	}

	free(exe_path);
	return (0);
}
