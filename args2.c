#include <stdio.h>

/**
 * main - prints all the arguments, without using ac
 * @ac: number of arguments passed
 * @av: argument vector pointer to string
 * Return: 0
 */

int main(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);
	return (0);
}
