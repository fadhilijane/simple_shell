#include <stdio.h>
#include <stdlib.h>

/**
 * read_line - a program that prints "$ "
 * Return: 0
 */
char get_input(void)
{
	char line[] = "pwd";
	char deli[] = " ";

	char *parts = strtok(line, deli);

	while (parts != NULL)
	{
		printf("%s\n", parts);
		parts = strtok(NULL, deli);
	}
	return (line);
}

int main(void)
{
	size_t n = 10;
	char *buff = NULL;

	while(1)
	{
		printf("$");
		getline(&buff, &n, stdin);
		printf("%s", buff);
	}
	free(buff);
	return (0);
}
