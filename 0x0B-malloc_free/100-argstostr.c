#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguements to the program
 * @ac: arguement count
 * @av: pointer to arguements
 * Return: pointer to new space in memory or null
 */

char *argstostr(int ac, char **av)
{
	char *strCopy;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
/* count the number of chars in each string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;

	/*
	 *allocate memory for total number of chars and
	 *new line for each word
	 */
	strCopy = malloc(sizeof(char) * size);
	if (strCopy == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			strCopy[k++] = av[i][j];
		}
		strCopy[k++] = '\n';
	}
	strCopy[k] = '\0';
	return (strCopy);
}
