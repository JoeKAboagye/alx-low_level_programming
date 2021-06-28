#include "holberton.h"

/**
 * _strcpy -Creates a copy of a string
 * @src: The original string
 * @dest: Copy of the original string
 * Return: A copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	return (dest);
}
