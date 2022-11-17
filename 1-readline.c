#include "main.h"
/**
 * read_line - read line from stdinp
 * Return: pointer to the line
 */
char *read_line(void)
{
	char *input = NULL;
	size_t buffsz = 0;

	if (getline(&input, &buffsz, stdin) == -1)
	{
		free(input);
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("Error\n");
			exit(EXIT_FAILURE);
		}
	}
	return (input);
}
