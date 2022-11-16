#include "main.h"

/**
 * dec_env - get the env variables
 * @envp: pointer to the environment variables
 * Return: pointer to array of paths
 */
char **dec_env(char **envp)
{
	char *path = _getenv("PATH", envp);
	char **pathed = fullpath(path, ENVDLM);

	return (pathed);
}
