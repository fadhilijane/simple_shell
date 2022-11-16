#include "main.h"
/**
 * childprcs - fork process and launch command execution
 * @args: pointer to strings of arguments
 * @dirs: string of path
 * Return: always 1 to continue the loop
 */
int childprcs(char **args, char **dirs)
{
	pid_t pid;
	int stat;

	pid = fork();
	if (pid == 0)
	{
		cmdrun(args, dirs);
	}
	if (args)
		free(args);
	if (pid < 0)
	{
		perror("Error:");
	}
	else
	{
		wait(&stat);
	}
	return (1);
}
