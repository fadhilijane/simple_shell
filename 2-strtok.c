#include <stdio.h>
#include <string.h>

/**
 * _strtok - splits a string
 * @str: string to be parsed
 * @delim: delimiter
 * Return: the string
 */

char _strtok(char *str, const char *delim)
{
	char str[];
	char *delim = " ";
	char *token;

