#include <stdio.h>
#include <string.h>
/**
 * main - splits a string
 * Return: Always (0)
 */
char *main(void)
{
	char *line[] = "The class is very tiring";
	char deli[] = " ";

	char *parts = strtok(line, deli);

	while (parts != NULL)
	{
		printf("%s\n", parts);
		parts = strtok(NULL, deli);
	}
	return (line);
}
