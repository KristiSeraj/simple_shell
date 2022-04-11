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
```
- The prompt is displayed again each time a command has been executed.
- If an executable cannot be found, prints an error message and displays the prompt again.
- Handles errors.
- Handles the "end of file" condition (`Cltr+D`)

**Compiling**

```c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c hsh
./hsh
```
## Authors

- [Arenc Palluqi](https://www.github.com/Arenc10)
- [Endrit Novaku](https://www.github.com/endritNovaku)
- [Kristjan Seraj](https://www.github.com/KristiSeraj)

