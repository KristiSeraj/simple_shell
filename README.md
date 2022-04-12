# Simple Shell 

Simple Shell is a project about an UNIX command line interpreter made in C by three awesome programmers.
![Lines of code](https://img.shields.io/tokei/lines/github.com/KristiSeraj/simple_shell?style=for-the-badge)

## Description

This **Simple Shell** can:

- Display a prompt and wait for the user to type a command.
```shell
./hsh
$ ls
command_path.c shell.c string_utils.c README.md
$
```
- The prompt is displayed again each time a command has been executed.
- If an executable cannot be found, prints an error message and displays the prompt again.
```shell
./hsh
$ hello
hello: Not found
$ 
```
- Handles errors.
- Handles the "end of file" condition (`Ctrl+D`)

Also works in interactive and non-interactive mode:
- interactive
```shell
./hsh
$ /bin/ls
AUTHORS README.md command_path.c shell.c shell.h
$
```
- non-interactive mode
```shell
$ echo "/bin/ls" | ./hsh
AUTHORS README.md command_path.c shell.c shell.h
$
```

**Compiling**

```c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c hsh
./hsh
```

## Code Structure

- [string_utils.c](https://github.com/KristiSeraj/simple_shell/blob/main/string_utils.c) - provides an implementation of fundamental string functionalities such as :
	- `int _strlen(char *string)` - Finds the length of `string`
	- `char *_strcat(char *dest, char *src)` - Concatenates content of `src` to the end of `dest`
	- `char *_strcpy(char *dest, char *src)` - Copies the content of `src` to `dest`
	- `char *_strdup(char *string)` - Duplicates a `string`
	- `int _strcmp(char *s1, char *s2)` - Compares `s1` with `s2`
	- `int _str_n_cmp(char *s1, char *s2, int n)` - Compares `s1` with `s2` regardin `n` bytes
- [environment_utils.c](https://github.com/KristiSeraj/simple_shell/blob/main/environment_utils.c) - provides an implementation of key functionalities such as :
	- `char *_getenv(char *name)` - Function that searches for the environment `name`
	- `int _prinenv(void)` - Function that prints the environment `name`
- [command_path.c](https://github.com/KristiSeraj/simple_shell/blob/main/command_path.c) - Finds the full path of the provided command
- [shell.c](https://github.com/KristiSeraj/simple_shell/blob/main/shell.c) - Logic implementation of our simple shell
	- `int command_read(char *s, size_t __attribute__((unused)) characters)` - Function that reads the `command` provided by `command_path()`
	- `int execute(char *cmd_array[])` - Function that takes an `command` and executes it
	- `int main(int __attribute__((unused)) argc, char *argv[])` - Entry point that executes every previously mentioned function
## Authors

- [Arenc Palluqi](https://www.github.com/Arenc10)
- [Endrit Novaku](https://www.github.com/endritNovaku)
- [Kristjan Seraj](https://www.github.com/KristiSeraj)

