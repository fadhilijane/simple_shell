#include "main.h"

/**
 * main - a program that prints simple_shell
 * Display a prompt and wait for the user to type a command
 * A command line always ends with a new line
 * The prompt is displayed again each time
 * a command has been executed
 * Return: 0
 */

int main(void)
{
	size_t n = 0;
	char *buff = NULL;
	char *argv[2];
	int k = 0;
	char *str;
	pid_t pid;

	while (1)
	{
		_putchar(36);
		k = getline(&buff, &n, stdin);
		if (k == -1 || strcmp(buff, "exit\n") == 0)
		{
			_putchar('\n');
			break;
		}
		str = strndup(buff, (k - 1));
		argv[0] = str;
		argv[1] = NULL;
		pid = fork();

		if (pid == 0)
		{
			if (execve(argv[0], argv, environ) == -1)
			{
				perror("Error");
				exit(-1);
			}
		}
		else
		{
			wait(NULL);
		}
	}
	free(str);
	free(buff);
	return (0);
}
