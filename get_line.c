#include <stdio.h>
#include <stdlib.h>
/**
 * main - read line
 * Return: always (0)
 */
int main(void)
{
	size_t n = 10;
	char *buf = NULL;

	printf("$");
	getline(&buf, &n, stdin);

	printf("$ %sBuffer size is %ld\n", buf, n);
	free(buf);

	return (0);
}
