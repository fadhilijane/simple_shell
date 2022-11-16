#include "main.h"

/**
 * sig_handler - ignore Ctrl-C input and prints prompt again
 * @n: takes in int from signal
 */
void sig_handler(int n)
{
	(void)n;
	write(STDOUT_FILENO, "\n$ ", 3);
}
