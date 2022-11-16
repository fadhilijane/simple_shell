#include "main.h"

/**
 * fullpath - get the full path of the environment
 * @path: pointer to the path from getenv function
 * @envdlm: the deliminter to parse the path
 * Return: pointer to array of string with every single path
 */

char **fullpath(char *path, char *envdlm)
{
	char *token_dir = NULL;
	int pathway = delimits(path, ':');

	char **dirs = malloc(sizeof(char *) * (pathway + 2));
	int k = 0;

	if (!dirs)
	{
		free(dirs);
		perror("Error");
		exit(EXIT_FAILURE);
	}
	token_dir = strtok(path, envdlm);
	while (token_dir != NULL)
	{
		dirs[k] = token_dir;
		token_dir = strtok(NULL, envdlm);
		k++;
	}
	dirs[k] = NULL;
	path = NULL;
	return (dirs);
}
