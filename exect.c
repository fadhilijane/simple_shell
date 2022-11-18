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

	char *bltstr[] = {"cd", "exit", "help", NULL};

	if (args[0] == NULL)
	{
		return (1);
	}
	for (k = 0 ; bltstr[k]; k++)
	{
		if (_strcmp(bltstr[k], args[0]) == 0)
		break;
	}
	switch (k)
	{
		case 0:
			check = _cd(args);
			break;
		case 1:
			check = h_exit();
			break;
		case 2:
			check = _help();
			break;
		default:
			check = childprcs(args, dirs);
			break;
	}
	return (check);
}
