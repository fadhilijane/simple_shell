#include "main.h"
/**
 * _cd - builtin cd: change directory
 * @args: arguments passed to cd
 * Return: always 1
 */
int _cd(char **args)
{
	int check;

	if (args[1] == NULL)
		puts("Put argument to cd");
	check = chdir(args[1]);
	free(args);
	if (check != 0)
	{
		perror("Error:");
	}

	return (1);
}
