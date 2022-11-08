#include <stdio.h>
#include <unistd.h>

/**
 * main - PPID
 * Return: always 0
 */

int main(void)
{
	pid_t parent_id;

	parent_id = getppid();
	printf("%u\n", parent_id);
	return (0);
}
