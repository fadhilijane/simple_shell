#include "main.h"
/**
 * _exect - execute commands
 * @args: pointer to string with arguments to execute
 * args[0] commands
 * @dirs: string of paths
 * Return: int (check) and continue
 */
int _exect(char **args, char **dirs)
{
	int k = 0;
	int check = 1;

	char *argv[] = {"/bin/ls", "-l", NULL};

	if (args[0] == NULL)
	{
		return (1);
	}
	for (k = 0; args[k]; k++)
	{
		if (_strcmp(argv[0], args[0]) == 0)
		break;
	}
	switch (k)
	{
		default:
			check = childprcs(args, dirs);
			break;
	}
	return (check);
}
