#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
/* Global variable for the environment */
extern char **environ;
/* String utilities */
int _strlen(char *string);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *string);
int _strcmp(char *s1, char *s2);
int _str_n_cmp(char *s1, char *s2, int n);
/* Environment utilities */
int _printenv(void);
char *_getenv(char *name);
/* command path */
char *command_path(char *cmd);
#endif
