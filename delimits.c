#include "main.h"

/**
 * delimits - count the words without the ':' separator
 * @string: pointer to the string to count words separeted with delim
 * @delim: delimiter for _strtkn strings
 * Return: the number of words in string
 */

int delimits(char *string, char delim)
{
	int k = 0, words = 0;

	if (string)
	{
		for (; string[k] != '\0'; k++)
		{
			if (string[k] == delim)
				words++;
		}
		words++;
	}
	return (words);
}
