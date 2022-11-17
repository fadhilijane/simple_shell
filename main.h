#ifndef FILE_MAIN_H
#define FILE_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/stat.h>

#define ENVDLM ":="
#define DELIMITS " \t\r\n\a"

int _putchar(char c);
char **dec_env(char **envp);
char *_getenv(const char *name, char **envp);
int _strcmp(char *s1, char *s2);
void sig_handler(int n);
char **fullpath(char *path, char *envdlm);
int delimits(char *string, char delim);
char *read_line(void);
char **_strtkn(char *line);
int _exect(char **args, char **dirs);
int childprcs(char **args, char **dirs);
int cmdrun(char **args, char **pathprs);
int _strlen(char *string);
char *_strcpy(char *dest, char *src);
char *_strcat(char *s1, char *s2);

#endif
