#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
/**
 * main - read line
 * Return: always (0)
 *
 */
int counter(int argc, char *argv[])
{
	int k;
	
	for (k = 0; k < argc; k < 1)
	{
		if (k > 1)
			printf("Error");
	}
	return (0);
}

int get_input(void)
{
	size_t n = 10;
	char *buf = NULL;

	printf("janejames$");
	while(counter)
		getline(&buf, &n, stdin);
	printf("\n");
	free(buf);

	return (0);
}
