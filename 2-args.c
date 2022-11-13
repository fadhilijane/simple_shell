#include <stdio.h>
/**
 * main - print the arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k <= 1)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
