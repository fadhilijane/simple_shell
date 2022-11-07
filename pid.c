#include <stdio.h>
#include <unistd.h>
/**
 * main - retrieves current process Id
 * Return: Always (0)
 */
int main(void)
{
	pid_t my_pid, myparent_pid;

	my_pid = getpid();
	myparent_pid = getppid();
	printf("PID:%d\n", my_pid);
	printf("ParentPID:%d\n", myparent_pid);
	return (0);
}
