#include "main.h"


/**
 * _strtkn - break a string in separated tokens using a set of delimiters
 * @line: line from stinp returned from read_line function
 * Return: array of tokens
 */
char **_strtkn(char *line)
{
	char **tokens = NULL;
	char *token = NULL;
	int bfsize = delimits(line, ' '), k = 0;

	tokens = malloc(sizeof(char *) * (bfsize + 1));
	if (!tokens)
	{
		free(tokens);
		perror("Error");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, DELIMITS);
	while (token != NULL)
	{
		tokens[k] = token;
		k++;
		token = strtok(NULL, DELIMITS);
	}
	tokens[k] = NULL;
	return (tokens);
}
