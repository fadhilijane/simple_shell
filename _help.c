#include "main.h"
/**
 * _help - display custom help in the stdoutput
 * Return: always 1 to continue the loop
 */
int _help(void)
{
	int k;
	char *bltstr[] = {"cd",	"help",	"exit",	NULL};

	_puts("This is a simple shell for ALX project\n");
	_puts("Type program names and arguments, and hit enter.\n");
	_puts("The following are built-ins:\n");
	for (k = 0; bltstr[k]; k++)
	{
		_puts(bltstr[k]);
		_putchar('\n');
	}
	_puts("Use the man command.\n");

	return (1);
}
