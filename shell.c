#include "main.h"

/**
 * main - a program that prints simple_shell
 * @argc: number of arguments
 * @argv: aguments
 * @envp: environment variables
 * Return: Always (0)
 */

int main(int argc, char **argv, char **envp)
{
	int prompt = 0;
	int stat = 1;
	char *line = NULL;
	char **args = NULL;
	char **dirs = NULL;

	(void)argc;
	(void)argv;
	dirs = dec_env(envp);
	prompt = (isatty(STDIN_FILENO));

	while (stat)
	{
		if (prompt == 1)
		{
			_putchar(36);

		}
		else
		{
			stat = 0;
		}
		signal(SIGINT, sig_handler);
		line = read_line();
		args = _strtkn(line);
		stat = _exect(args, dirs);
		if (line)
			free(line);
		if (prompt == 0)
			free(dirs);

	}
	free(dirs);
	return (0);
}
