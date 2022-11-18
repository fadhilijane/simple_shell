#include "main.h"
/**
 * cmdrun - execute the comands or try to execute args[0]
 * @args: argumentes from input
 * @pathed: string of paths
 * Return: always exit_success
 */
int cmdrun(char **args, char **pathed)
{
	int k = 0;
	char *tstcmd = NULL;

	for (k = 1; pathed[k] != NULL; k++)
	{
		tstcmd = malloc(sizeof(char) * (_strlen(pathed[k])
					+ _strlen(args[0]) + 2));
		_strcpy(tstcmd, pathed[k]);
		tstcmd = _strcat(tstcmd, "/");
		tstcmd = _strcat(tstcmd, args[0]);

		if (access(tstcmd, X_OK) == 0)
		{

			if (execve(tstcmd, args, NULL) == -1)
			{
				perror("Command not found");
			}
			/*exit(EXIT_FAILURE);*/
		}
		free(tstcmd);
	}
	if (pathed[k] == NULL)
		free(pathed);
	{
		if (access(args[0], X_OK) == 0)
		{
			if (execve(args[0], args, NULL) == -1)
			{
				perror("Command not found");
			}
			/*exit(EXIT_FAILURE);*/
		}
	}
	exit(EXIT_SUCCESS);
}
