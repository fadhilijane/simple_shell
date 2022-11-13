#include <stdio.h>
#include <unistd.h>

/**
 * main - multiplies two integers
 * Return: (0) always
 */
int main(void)
{
	int k = 5;
	int g = 10;
	int mul;
	pid_t pid, ppid;	

	pid = getpid();
	ppid = getppid();

	mul = k * g;
	printf("The multiplication of integers is:%d\n", mul);
	printf("pid is %d\n", pid);
	printf("ppid is %d\n", ppid);
	return (0);
}
