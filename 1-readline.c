#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints "$ "
 * Return: 0
 */

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
