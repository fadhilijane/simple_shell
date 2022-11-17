#include "main.h"

/**
 * _getenv - get the value of an environment
 * @name: name of the environment variable
 * @envp:pointer to the environment variables
 * Return: char* with the matching path
 */
char *_getenv(const char *name, char **envp)
{
	int k = 0, m = 0, compare = 0;

	for (; envp[k] != NULL; k++)
	{
		for (; envp[k][m] != '='; m++)
		{
			compare = _strcmp((char *)name, envp[k]);
			if (compare == 0)
			{
				return (envp[k]);
			}
			break;
		}
	}
	return (envp[k]);
}
