#include "main.h"
/**
 * _strcat - concatenate two strings (dest + src)
 * @s1: the string to concatenate src
 * @s2: initial string
 * Return: the final and concatenated string
 */
char *_strcat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, k = 0;
	char *laststr = NULL;

	if (s1)
		len1 = _strlen(s1);
	if (s2)
		len2 = _strlen(s2);

	laststr = malloc(sizeof(char) * (len1 + len2 + 1));

	for (k = 0; k < len1; k++)
		laststr[k] = s1[k];
	for (; k < len1 + len2; k++)
		laststr[k] = s2[k - len1];

	laststr[k] = '\0';
	return (laststr);
}
