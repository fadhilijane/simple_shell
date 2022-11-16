#include "main.h"

/**
 * _strcpy - copy the string
 * Description: the string pointed to a buffer
 * @dest: the buffer in where copy the string
 * @src: the string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, k = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (k = 0; k <= len; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
