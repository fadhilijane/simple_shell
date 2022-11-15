#include "main.h"

/**
 * main - a program that prints simple_shell
 * Display a prompt and wait for the user to type a command
 * A command line always ends with a new line
 * The prompt is displayed again each time
 * a command has been executed
 * The command lines are simple, no semicolons,
 * no pipes, no redirections or any other advanced features.
 * The command lines are made only of one word.
 * No arguments will be passed to programs.
 * If an executable cannot be found,
 * print an error message and display the prompt again
 * Handle errors
 * You have to handle the “end of file” condition (Ctrl+D)
 * Return: 0
 */
int main(void)
{
	size_t n = 10;
	char *buff = NULL;
	char *argv[] = {"/bin/ls", NULL};
	pid_t pid;

	while (1)
	{
		putchar(36);
		getline(&buff, &n, stdin);
		pid = fork();

		if (pid == -1)
			return (-1);
		if (pid == 0)
		{
			int value = execve(argv[0], argv, NULL);

			if (value == -1)
				perror("Error");
		}
		else
		{
			wait(NULL);
		}

	}
	free(buff);
	return (0);
}
